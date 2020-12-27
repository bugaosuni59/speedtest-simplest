# speedtest-simplest

最简单的测速服务

type2更准一点

## 部署方法：

1.搞一台服务器，装上任意一个Web反向代理(nginx/apache/...)

2.将index.html等文件扔到Web反向代理目录下

3.编译执行createFile.cpp生成一个数据文件

编译：```g++ createFile.cpp -o createFile```

运行：```./createFile```（生成1GB数据文件，大小可以在代码里改）

4.将你的服务器ip填写到server_ip.js中

5.从任意浏览器访问http://你的服务器ip/index.html，即可体验测速~



