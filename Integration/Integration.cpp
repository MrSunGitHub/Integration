// Integration.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include<iostream>
#include <string>
#include <sstream>

using namespace std;
//10��������ÿ��ֻ��ִʳ�����Ĳ����Ϳ���
void main(int arg,char* argv[])
{
	//���÷ִʳ���,�߸�����
	stringstream paraStr;
	paraStr << "E:\\coding\\ChineseSegment\\ChiSeg-GitHub\\ChiSeg-GitHub\\ChiSegSystemTFDev\\x64\\Release\\ChiSegSystem.exe";
	for (int i = 1; i < 8;i++)
	{
		paraStr << " " << argv[i];
	}
	system(paraStr.str().c_str());

	//�������ɷִʽ���������+�������зֽ���ļ����������·����2������argv[6��7]
	paraStr.str("");//���ƴ�Ӵ�
	paraStr << "E:\\coding\\ChineseSegment\\GetICALASCodes\\Release\\GetICALASCodes.exe  " << argv[7] << " " << argv[8];
	system(paraStr.str().c_str());

	//���ü���Fֵ����+ֱ�����������̨,��������ȷ�ı�ע��Ϣ���룬�����ı�����Ϣ��2������ argv[8��7]
	paraStr.str("");//���ƴ�Ӵ�
	paraStr << "E:\\coding\\ChineseSegment\\ChiSeg-GitHub\\ChiSeg-GitHub\\CalF-measure\\Release\\CalF-measure.exe  " << argv[9] << " " << argv[8];
	system(paraStr.str().c_str());

	//�����Ҵ������+�������·��
	paraStr.str("");//���ƴ�Ӵ�
	paraStr << "E:\\coding\\ChineseSegment\\FindFaultPoint\\Release\\FindFaultPoint.exe  " << argv[3] << " " << argv[4] << " " << argv[9] << " " << argv[8] << " " << argv[6]<<" "<<argv[7] <<" "<<argv[10];
	system(paraStr.str().c_str());

}

