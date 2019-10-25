# Experimental Method in Nuclear Physics 

## 参考书
 * [Techniques for Nuclear and Particle Physics Experiments](https://link.springer.com/book/10.1007%2F978-3-642-57920-2)
 * [Radiation detection and measurement 4th edition](https://www.amazon.com/dp/0470131489/ref=rdr_ext_tmb)
 * [原子核物理实验方法 第三版](https://book.douban.com/subject/4322141)

## 通知
 * 请按照下面链接提前学习ROOT相关知识，ROOT内容将在第一章结束后开始。
## ROOT 安装
 * 安装与操作系统版本对应的virtual box虚拟机
    - 访问 [linux+ROOT virtual box镜像](https://pkuenp.quickconnect.cn/d/s/509132606843953153/gnOF_Y4_Q13MvT-ajMjsqxGZf9TPOdjf-DLtAuHr2EAc_)，下载镜像文件，密码为dataana，下载后双击导入virtualbox虚拟机即可
    - [Geant4+ROOT virtual Machine](http://geant4.in2p3.fr/spip.php?rubrique8&lang=en) 可选镜像from IN2P3，推荐！
 * 操作系统为linux，按照root.cern.ch网页的安装方法安装即可。
 
## ROOT Lecture

 * [ROOT](http://root.cern.ch)
 * [ROOT_Day1](http://hadron.physics.fsu.edu/~skpark/document/ROOT/root_beginers/ROOT_for_beginners_Day1.pdf)
 * [ROOT_Day1](http://hadron.physics.fsu.edu/~skpark/document/ROOT/root_beginers/ROOT_for_beginners_Day2.pdf)
 * [ROOT_Day1](http://hadron.physics.fsu.edu/~skpark/document/ROOT/root_beginers/ROOT_for_beginners_Day3.pdf)
 * [ROOT_Day1](http://hadron.physics.fsu.edu/~skpark/document/ROOT/root_beginers/ROOT_for_beginners_Day4.pdf)
 * [ROOT_Day1](http://hadron.physics.fsu.edu/~skpark/document/ROOT/root_beginers/ROOT_for_beginners_Day5.pdf)
 * [ROOT Primer](https://d35c7d8c.web.cern.ch/sites/d35c7d8c.web.cern.ch/files/ROOT5Primer.pdf)
    
----
## Coursework 
* 为满足不同方向的需求，提供两套作业。
    - 作业a.以模拟计算或数据处理为主，实验方向必选
    - 作业b.以计算题或推导题为主，因作业难度和完成作业时间不同，总评分比作业a 少5分。
### 作业
* 作业a要求
    - 推荐用ROOT(c++), 但也可用其他编程语言或Excel等工具.
    - 直接抄袭他人代码者记零分。
    - 提交可运行代码，分析过程与结果。
    - 经助教批改后，根据批改意见进行修改，可多次提交。成绩以最后一次提交结果评判。
    - 提交日期原则上从发布之日，两周内。可根据进度延长。
  
* 第一章
  * 做作业前先学习下面链接中的E-loss计算方法
     - 作业1.1和1.2中能量损失的计算方法 [E-loss计算方法](https://nbviewer.jupyter.org/github/pkunucexp/experimental-methods/blob/master/chapt1/elosscalc/eloss%20calculation.ipynb)
  * [1.1 计算Bragg curve](https://nbviewer.jupyter.org/github/pkunucexp/experimental-methods/blob/master/chapt1/coursework1.1/coursework%201.1%20bragg%20curve.ipynb)
  * [1.2 模拟望远镜法带电粒子鉴别](https://nbviewer.jupyter.org/github/pkunucexp/experimental-methods/blob/master/chapt1/coursework1.2/coursework%201.2%20telescope.ipynb)  
     - 作业要求中实验数据见 [望远镜法带电粒子鉴别](https://nbviewer.jupyter.org/github/pkunucexp/experimental-methods/blob/master/chapt1/telescope/telescope%20PID.ipynb)
 * 第二章
   * 2.1 参考[中心极限定理](https://nbviewer.jupyter.org/github/pkuNucExp/experimental-methods/blob/master/chapt2/centerlimit.ipynb)的做法，用指数或者朗道分布验证中心极限定理。
 * 第三章
   * 3.1-3.3 [gamma 探测器刻度作业要求及说明](https://nbviewer.jupyter.org/github/pkunucexp/experimental-methods/blob/master/chapt3/gammacal/coursework3.1/coursework%203.1%20gamma%20calibration.ipynb)
     * 数据文件[gamma.root]()已更新！
----
##  Lecture Notes
  * [Overview](http://222.29.111.2:8888/data/Overview.pdf)
  * [chapt0 Introduction](http://222.29.111.2:8888/data/chapt0%20Introduction.pdf)
  * [chapt1 Interaction of Radiation with Matter](http://222.29.111.2:8888/data/chapt1%20Interaction%20of%20Radiation%20with%20Matter.pdf)
    * [望远镜法带电粒子鉴别](https://nbviewer.jupyter.org/github/pkunucexp/experimental-methods/blob/master/chapt1/telescope/telescope%20PID.ipynb)
    * Reference
      * [HIRA telescope](http://222.29.111.2:8888/data/HIRA%20telescope.pdf)
        * [LASSA telescope](http://222.29.111.2:8888/data/LASSA%20telescope.pdf)
      * [DALI array](http://222.29.111.2:8888/data/Extz2t-DALI%20array.pdf)
      * [PhysRevC.65.044006_Detection of neutron clusters](http://222.29.111.2:8888/data/PhysRevC.65.044006_Detection%20of%20neutron%20clusters.pdf)
        * [On the possible detection of 4n events in the breakup of 14Be](http://222.29.111.2:8888/data/On%20the%20possible%20detection%20of%204n%20events%20in%20the%20breakup%20of%2014Be.pdf)
      * [PhysRevLett.116.052501](http://222.29.111.2:8888/data/PhysRevLett.116.052501.pdf)
  * [chap.2 Statistics and the Treatment of Experimental Data](http://222.29.111.2:8888/data/chap.2%20Statistics%20and%20the%20Treatment%20of%20Experimental%20Data.pdf)
    * [随机事件事件间隔分布](https://nbviewer.jupyter.org/github/PkuNucExp/experimental-methods/blob/master/chapt2/ramdom%20timings.ipynb)
    * [各种几率分布与中心极限定理](https://nbviewer.jupyter.org/github/PkuNucExp/experimental-methods/blob/master/chapt2/centerlimit.ipynb)
    * Reference
        * [Waiting-Line Models](http://222.29.111.2:8888/data/Waiting-Line%20Models.pdf) applications of distribution of time intervals.
  * [chap.3 General characteristics of detectors](http://222.29.111.2:8888/data/chap.3%20General%20characteristics%20of%20detectors.pdf)

