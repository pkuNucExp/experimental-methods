TGraph *g1;//定义新的二维散点图(TGraph) g1
void srimc()
{
  g1=new TGraph;
  string ss, sunit;
  double a, b, e, ededx, ndedx;//ededx-电子阻止本领，ndedx-核阻止本领
  ifstream in1("12C-water-srim.txt");//读入Srim2013程序生成的12C入射H2O的输出文件
  if(in1.is_open()){//检查文件是否存在
    for(int j=0;j<24;j++) getline(in1,ss);//读入文件中开始的24行描述性文本
    int i=0;
    while(i<174-24)//数据位于25-174行
      {
	in1 >> e >> sunit >> ededx >> ndedx >> a >> ss >> a >> ss >> a >> ss;
	if(sunit=="keV") e /=1e3;
	if(sunit=="GeV") e *= 1e3;
	g1->SetPoint(i, e, ededx+ndedx);//在g1中加入点, 参考TGraph class reference 中 SetPoint()函数用法
	i++;
      }
  }
  in1.close();
  g1->SetLineColor(kGreen);//设置g1显示线的颜色为绿色
  auto c1=new TCanvas("c1","c1");
  c1->SetLogy();
  c1->SetLogx();
  g1->Draw();//画g1图

}
