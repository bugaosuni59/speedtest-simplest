# Speedtest Step by Step

搭建一个超简单的测速服务

# Step 1

## 部署方法：

1.搞一台服务器，装上任意一个Web反向代理(nginx/apache/...)

2.将index.html等文件扔到Web反向代理目录下

3.编译执行createFile.cpp生成一个数据文件

编译：```g++ createFile.cpp -o createFile```

运行：```./createFile```（生成1GB数据文件，大小可以在代码里改）

4.从任意浏览器访问http://你的服务器ip/index.html，即可体验测速~

## 原理：

持续下载一个大文件，记录平均下载速度



# Step 2

1.使用6线程下载，Chrome浏览器支持单端口6线程加载，也可以加端口从而支持更多线程下载

2.使用更多的服务器进行下载测试，服务器填入server_ip中

3.在服务器后端安装/开启bbr拥塞控制，从而加快数据传输（略）



# Step 3

1.不断记录速度采样点，并进行策略性筛选，如使用中位数等

# Step 4

1.绘制界面，更好地展示测速效果



# 可以参考的一些设计思路

Fast.com：动态开线程，2秒内浮动不超过5%则停止

Speedtest.net：动态开线程，数据去掉一些较高的部分和较低的部分

soeedtest-CIS中，使用了关键速度区间（Crucial Interval Sampling）进行过滤