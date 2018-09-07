# exprimental-methods
欢迎大家来到课程网站。本课程为课堂内容的补充，提供在线演示、发布作业等功能

## 注意
1. 考虑到服务器性能及ip访问限制，数据分析在学生个人电脑上完成。
2. 为确保环境一致性，应用docker技术发布数据环境镜像。
3. 原则上可以自行搭建数据分析环境，但不提供过多支持。
4. 严格按照规范进行操作，由于违规操作引起的数据丢失概不负责！

## 数据分析框架搭建
### windows
  - 从官网下载docker安装包，安装时选择linux-docker.
  - 安装concology，并安装xsv。
  - 设置xauth
  - 设置端口转发
### linux
### macOS
1. windows、linux、macOS 自行安装docker.
   - windows,macOS [下载链接](https://www.docker.com/get-started)
   - linux系通过自带包管理器或其他方式安装.
2. 在终端(linux/macOS:terminal Windows:cmd/powershell)执行命令
`docker pull registry.cn-beijing.aliyuncs.com/yfs2018/jupyroot:v1`
获得镜像。
3. 设置x11转发。
  - macOS 
    * [reference](https://hub.docker.com/r/playniuniu/docker-gui-firefox/)(http://shaoguangleo.github.io/2018/01/21/docker-run-gui-on-macosx/)
    * pre-requirement
    ```bash
    brew cask install xquartz
    brew install socat
    ```
    * Forward X11 socket
    ```
    socat TCP-LISTEN:6000,reuseaddr,fork UNIX-CLIENT:\"$DISPLAY\"
    ```
    * Check macOS's ip
    ```
    export MAC_IP=$(ifconfig vnic0 | grep inet | awk '$1=="inet" {print $2}')
    ```
    * Add X11 authority (optional)
    ```bash
    xhost + $MAC_IP
    ```
  - linux
    * 终端输入`xhost +`
    * 添加docker运行参数
    `-v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=unix$DISPLAY`
4. 进行数据分析环境
   ```
   docker run -it -p 8000:8888 registry.cn-beijing.aliyuncs.com/yfs2018/jupyroot:v1
   ```
   由于镜像名过长，进行重命名方便后续分析
   ```
   docker image ls
   
   REPOSITORY                                          TAG                 IMAGE ID            CREATED             SIZE
   registry.cn-beijing.aliyuncs.com/yfs2018/jupyroot   v1                  36b93fdf2267        2 hours ago         5.83GB
   ```
   提取出image id 36b93fdf2267
   ```bash
   docker tag 36b93fdf2267 anaenv
   ```
   ```bash
   docker image ls
   
   REPOSITORY                                          TAG                 IMAGE ID            CREATED             SIZE
   anaenv                                              latest              36b93fdf2267        2 hours ago         5.83GB
   registry.cn-beijing.aliyuncs.com/yfs2018/jupyroot   v1                  36b93fdf2267        2 hours ago         5.83GB
   ```
   随后即可简化命令
   ```bash
   xhost + && export host_ip=$(ifconfig vnic0 | grep inet | awk '$1=="inet" {print $2}') && docker run -it -p 8000:8888 -e DISPLAY=$(host_ip):0.0 anaenv  (macOS)
   xhost + && docker run -it -v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=unix$DISPLAY -p 8000:8888 anaenv (linux)
   docker run -it -p 8000:8888 -e DISPLAY=$(默认交换机的ip地址):0.0 anaenv (windows)
   ```
   若如果需要保留数据文件，或分析本机数据，需要将本机文件挂载到docker中。
   ```bash
   docker run -it -v $(host_path):$(docker_path) -p $(host_port):$(docker_server_port) anaenv
   ```
5. 分析环境包含内容：
   - root6.12.04 compiled with python3
   - python3
   - jupyter,ipython...
   
## 课程内容补充及演示
1. Interaction of Radiation with matter
2. Statistics and the treatment of experimental data

## Q&A
- 为什么使用docker技术？
```
docker 可以确保每个人搭建的数据环境是一致的。且能够极大地降低环境搭建的门槛和复杂性。
```
- 我能在docker中做什么？
```
do whatever you want. 镜像中给大家提供的是root权限，可以安装绝大部分linux系软件，并无太多限制。但是退出该环境后，对系统做出的改变会丢失。
```
- 我如何才能保留自己安装的软件和处理的数据不丢失，下次启动的时候依旧可以使用？
```
对于处理的数据文件：
可以通过挂载本地目录到docker中，这样在挂载目录做出的改变会直接影响本机目录内容。
对于自己安装的软件：
参阅docker commit命令，打包自己的镜像即可。
```
- 运行docker提示我权限不足怎么办？
```
此问题一般出现在linux上。由于使用sudo命令安装docker，当使用一般用户运行时会提示权限不足。需要在docker前加sudo命令。
若要避免此问题，可执行`sudo gpasswd -a ${USER} docker`，将当前用户加入到docker组，并修改相关文件权限。随后重启docker服务即可。若提示docker组不存在，则`sudo groupadd docker`即可。
```

## contact me
- email：yuanfangsee@pku.edu.cn
- phone: 18511281625
- wechat: mission-young
