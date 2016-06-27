// Integration.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
#include <string>
#include <sstream>

using namespace std;
//10个参数，每次只变分词程序里的参数就可以
void main(int arg,char* argv[])
{
	//调用分词程序,七个参数
	stringstream paraStr;
	paraStr << "E:\\coding\\ChineseSegment\\ChiSeg-GitHub\\ChiSeg-GitHub\\ChiSegSystemTFDev\\x64\\Release\\ChiSegSystem.exe";
	for (int i = 1; i < 8;i++)
	{
		paraStr << " " << argv[i];
	}
	system(paraStr.str().c_str());

	//调用生成分词结果编码程序+参数：切分结果文件，结果保存路径，2个参数argv[6，7]
	paraStr.str("");//清空拼接串
	paraStr << "E:\\coding\\ChineseSegment\\GetICALASCodes\\Release\\GetICALASCodes.exe  " << argv[7] << " " << argv[8];
	system(paraStr.str().c_str());

	//调用计算F值程序+直接输出到控制台,参数：正确的标注信息编码，真正的编码信息，2个参数 argv[8，7]
	paraStr.str("");//清空拼接串
	paraStr << "E:\\coding\\ChineseSegment\\ChiSeg-GitHub\\ChiSeg-GitHub\\CalF-measure\\Release\\CalF-measure.exe  " << argv[9] << " " << argv[8];
	system(paraStr.str().c_str());

	//调用找错误程序+结果保存路径
	paraStr.str("");//清空拼接串
	paraStr << "E:\\coding\\ChineseSegment\\FindFaultPoint\\Release\\FindFaultPoint.exe  " << argv[3] << " " << argv[4] << " " << argv[9] << " " << argv[8] << " " << argv[6]<<" "<<argv[7] <<" "<<argv[10];
	system(paraStr.str().c_str());

}

