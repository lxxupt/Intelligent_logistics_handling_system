#include "Fee_arm.h"
#include "Tx2.h"
int abs(int num)
{
	if(num<0)
		num=-num;
	else ;
	return num;
}
/*
*���������ִ�к���
*serialnum�����������-----------------�� Ӧ �� �� ˵ ��						
*								0									      ��е�۴�������
*								1									      ɨ���ά�붯��
*								2									      ɨ�������ɫ����
*								
*/



uint16_t pos_0=0,pos_1=0,pos_2=0,pos_3=0,pos_4=0,pos_5=0;
void standby_actiongroup(void)//��е�۴�������
{
	WritePosEx(0, 940, 1750, 50);			WritePosEx(0, 940, 1750, 50);
	WritePosEx(1, 1388, 1750, 50);		WritePosEx(1, 1388, 1750, 50);
	WritePosEx(2, 3130, 1750, 50);		WritePosEx(2, 3130, 1750, 50);
	WritePosEx(3, 3017, 1750, 50);		WritePosEx(3, 3017, 1750, 50);
	WritePosEx(4, 2048, 1750, 50);		WritePosEx(4, 2048, 1750, 50);
	WritePosEx(5, 2048, 1750, 50);		WritePosEx(5, 2048, 1750, 50);
	delay_ms(1200);
}

void scan_actiongroup_QR(void)//ɨ���ά�붯��	
{
  pos_0=1990;		pos_1=2709;		pos_2=695;
	pos_3=1438;		pos_4=1505;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    while(ReadMove(0)||ReadMove(1)||ReadMove(2)||ReadMove(3));
}
void scan_actiongroup_QR_fast(void)//����ɨ���ά�붯��	
{
  pos_0=1990;		pos_1=2709;		pos_2=695;
	pos_3=1438;		pos_4=1505;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}

void scan_actiongroup_Bar(void)//ɨ�������ɫ����	
{
    
	pos_0=1946;		pos_1=1668;		pos_2=946;
	pos_3=2499;		pos_4=1650;		
	WritePosEx(0, pos_0, 5000, 50);		WritePosEx(0, pos_0, 5000, 50);
	WritePosEx(1, pos_1, 5000, 50);		WritePosEx(1, pos_1, 5000, 50);
	WritePosEx(2, pos_2, 5000, 50);		WritePosEx(2, pos_2, 5000, 50);
	WritePosEx(3, pos_3, 5000, 50);		WritePosEx(3, pos_3, 5000, 50);
	WritePosEx(4, pos_4, 5000, 50);		WritePosEx(4, pos_4, 5000, 50);
	delay_ms(800);
}
void scan_actiongroup_Bar_fast(void)//����ɨ�������ɫ����	
{
	pos_0=1946;		pos_1=1668;		pos_2=946;
	pos_3=2499;		pos_4=1650;		
	WritePosEx(0, pos_0, 5000, 50);		WritePosEx(0, pos_0, 5000, 50);
	WritePosEx(1, pos_1, 5000, 50);		WritePosEx(1, pos_1, 5000, 50);
	WritePosEx(2, pos_2, 5000, 50);		WritePosEx(2, pos_2, 5000, 50);
	WritePosEx(3, pos_3, 5000, 50);		WritePosEx(3, pos_3, 5000, 50);
	WritePosEx(4, pos_4, 5000, 50);		WritePosEx(4, pos_4, 5000, 50);
    delay_ms(600);
}
void scan_actiongroup_Barshou_fast(void)//���������ɨ�������ɫ����	
{
	pos_0=1946;		pos_1=1668;		pos_2=697;
	pos_3=2836;		pos_4=1650;		
    
    WritePosEx(3, pos_3, 5000, 50);		WritePosEx(3, pos_3, 5000, 50);
    delay_ms(150);
	WritePosEx(0, pos_0, 5000, 50);		WritePosEx(0, pos_0, 5000, 50);
	WritePosEx(1, pos_1, 5000, 50);		WritePosEx(1, pos_1, 5000, 50);
	WritePosEx(2, pos_2, 5000, 50);		WritePosEx(2, pos_2, 5000, 50);
	WritePosEx(4, pos_4, 5000, 50);		WritePosEx(4, pos_4, 5000, 50);
}

void shuzhi(void)
{
	pos_0=2994;		pos_1=2059;		pos_2=2052;
	pos_3=2048;		pos_4=1600;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	while(ReadMove(1)||ReadMove(2)||ReadMove(3));
}
void shuzhi_fast(void)
{
	pos_0=2994;		pos_1=2059;		pos_2=2052;
	pos_3=2048;		pos_4=1600;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
}
void xiangqian(void)
{
	pos_0=2994;
    WritePosEx(0, pos_0, 3000, 50);
    while(ReadMove(0));
}
void xiangqian_fast(void)
{
	pos_0=2994;
    WritePosEx(0, pos_0, 3000, 50);
}
void guodu1(void)
{
	pos_1=1887;		pos_2=2624;
	pos_3=2458;		pos_4=1300;
	WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
	WritePosEx(2, pos_2, 3000, 30);		WritePosEx(2, pos_2, 3000, 30);
	WritePosEx(3, pos_3, 3000, 30);		WritePosEx(3, pos_3, 3000, 30);
    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	while(ReadMove(1)||ReadMove(2)||ReadMove(3));
}
void guodu2(void)
{
    WritePosEx(0, 2829, 3000, 50);//0���ת��ǰ��
    delay_ms(100);
    while(ReadMove(0));
}
void guodu1_fast(void)
{
	pos_1=1887;		pos_2=2624;
	pos_3=2458;		pos_4=1300;
	WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
	WritePosEx(2, pos_2, 3000, 30);		WritePosEx(2, pos_2, 3000, 30);
	WritePosEx(3, pos_3, 3000, 30);		WritePosEx(3, pos_3, 3000, 30);
    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}
void guodu2_fast(void)
{
    pos_0=2829;
    WritePosEx(0, pos_0, 3000, 50);//0���ת��ǰ��
}
void guodu_fast(void)
{
    guodu1_fast();
    guodu2_fast();
}
void finish_lala(void)//��β����
{
	pos_0=1946;		pos_1=3091;		pos_2=693;
	pos_3=1269;		pos_4=1200;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}

void scan_actiongroup_color_ring_fast(void)//ɨ��ɫ����ɫ����
{
	pos_0=2950;		pos_1=2115;		pos_2=2812;
	pos_3=3030;		pos_4=1600;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}

void scan_zhijiao_fast(u8 mode)//mode ==1 Ϊ����̨��������  mode ==2 Ϊ����������
{
	if(mode==1) 
    {
		pos_0=1950;
        pos_1=2655;		pos_2=2547;
        pos_3=2867;		pos_4=1600;
    }
	else
    {
        pos_0=2950;
        pos_1=2285;		pos_2=2878;
        pos_3=2980;		pos_4=1600;	
    }        
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}


//void scan_actiongroup_QR(void)//ɨ���ά�붯��	
//{
//	WritePosEx(0, 1974, 3000, 50);		WritePosEx(0, 1974, 3000, 50);
//	WritePosEx(1, 2471, 3000, 50);		WritePosEx(1, 2471, 3000, 50);
//	WritePosEx(2, 697, 3000, 50);		WritePosEx(2, 697, 3000, 50);
//	WritePosEx(3, 1670, 3000, 50);		WritePosEx(3, 1670, 3000, 50);
//	WritePosEx(4, 1500, 3000, 50);		WritePosEx(4, 1500, 3000, 50);
//}

//void scan_actiongroup_Bar(void)//ɨ�������ɫ����	
//{
//	pos_0=1946;		pos_1=1668;		pos_2=946;
//	pos_3=2499;		pos_4=1650;		
//	WritePosEx(0, pos_0, 5000, 50);		WritePosEx(0, pos_0, 5000, 50);
//	WritePosEx(1, pos_1, 5000, 50);		WritePosEx(1, pos_1, 5000, 50);
//	WritePosEx(2, pos_2, 5000, 50);		WritePosEx(2, pos_2, 5000, 50);
//	WritePosEx(3, pos_3, 5000, 50);		WritePosEx(3, pos_3, 5000, 50);
//	WritePosEx(4, pos_4, 5000, 50);		WritePosEx(4, pos_4, 5000, 50);
//	delay_ms(800);
//}
//void scan_actiongroup_Bar_fast(void)//����ɨ�������ɫ����	
//{
//	pos_0=1946;		pos_1=1668;		pos_2=946;
//	pos_3=2499;		pos_4=1650;		
//	WritePosEx(0, pos_0, 5000, 50);		WritePosEx(0, pos_0, 5000, 50);
//	WritePosEx(1, pos_1, 5000, 50);		WritePosEx(1, pos_1, 5000, 50);
//	WritePosEx(2, pos_2, 5000, 50);		WritePosEx(2, pos_2, 5000, 50);
//	WritePosEx(3, pos_3, 5000, 50);		WritePosEx(3, pos_3, 5000, 50);
//	WritePosEx(4, pos_4, 5000, 50);		WritePosEx(4, pos_4, 5000, 50);
//}

//void shuzhi(void)
//{
//	pos_0=2994;		pos_1=2059;		pos_2=2052;
//	pos_3=2048;		pos_4=1600;		
//	//WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
//	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
//	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
//	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
//	//WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//	while(ReadMove(1)||ReadMove(2)||ReadMove(3));
//    WritePosEx(0, pos_0, 3000, 50);
//    while(ReadMove(0));
//}
//void guodu_1(void)
//{
//	pos_1=1887;		pos_2=2624;
//	pos_3=2458;		pos_4=1300;
//	//WritePosEx(0, pos_0, 3000, 30);		WritePosEx(0, pos_0, 3000, 30);
//	WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
//	WritePosEx(2, pos_2, 3000, 30);		WritePosEx(2, pos_2, 3000, 30);
//	WritePosEx(3, pos_3, 3000, 30);		WritePosEx(3, pos_3, 3000, 30);
//    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//	while(ReadMove(1)||ReadMove(2)||ReadMove(3));
//    WritePosEx(0, 2829, 3000, 50);//0���ת��ǰ��
//    delay_ms(100);
//    while(ReadMove(0));
//}

//void guodu_fast(void)//����ɨ��ɫ����ɫ����
//{
//	pos_1=1887;		pos_2=2624;
//	pos_3=2458;		pos_4=1300;
//	//WritePosEx(0, pos_0, 3000, 30);		WritePosEx(0, pos_0, 3000, 30);
//	WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
//	WritePosEx(2, pos_2, 3000, 30);		WritePosEx(2, pos_2, 3000, 30);
//	WritePosEx(3, pos_3, 3000, 30);		WritePosEx(3, pos_3, 3000, 30);
//    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//	delay_ms(400);
//    WritePosEx(0, 2829, 3000, 50);//0���ת��ǰ��
//    delay_ms(100);
//}

//void scan_actiongroup_color_ring(void)//ɨ��ɫ����ɫ����
//{
//	pos_0=2970;		pos_1=2115;		pos_2=2812;
//	pos_3=3030;		pos_4=1600;		
//	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
//	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
//	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
//	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
//	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//}

//void scan_zhijiao(u8 mode)//mode ==1 Ϊ����̨��������  mode ==2 Ϊ����������
//{
//	if(mode==1) 
//		pos_0=1950;
//	else
//		pos_0=2950;
//	pos_1=2655;		pos_2=2547;
//	pos_3=2867;		pos_4=1600;		
//	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
//	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
//	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
//	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
//	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//    while(ReadMove(1)||ReadMove(2)||ReadMove(3));
//}


void scan_actiongroup_color_ring2(void)//��ȷɨ��ɫ����ɫ����
{
	pos_0=2928;		pos_1=2746;		pos_2=2311;
	pos_3=3029;		pos_4=1600;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(700);
}
void get_actiongroup_ring(void)//Բ�̴�ץȡ��鶯��		v
{
	pos_1=1595;		pos_2=1105;
	pos_3=2432;		pos_4=900;		
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
    WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
    delay_ms(350);
}
void place_actiongroup_car_R(void)//�����ŵ����϶�Ӧ��ɫλ��		v		v
{
	//��е��̧��
	pos_0=1965;		pos_1=2471;		pos_2=1048;
	pos_3=1558;		pos_4=900;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(400);
	
	//ת��
	pos_0=3328;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(850);
	
	//����
	pos_1=2500;		pos_2=767;    pos_3=1581;	
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
	
	//�ɿ�����
	pos_4=1200;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 100);
	delay_ms(300);
	
	//��е��̧��
	pos_1=2503;		pos_2=1224;   pos_3=1149;
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);	
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);	
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);	
	delay_ms(400);
	

	pos_0=1995;
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(850);
}
void place_actiongroup_car_G(void)//�����ŵ����϶�Ӧ��ɫλ��		v		v
{
	//��е��̧��
	pos_0=1965;		pos_1=2471;		pos_2=1048;
	pos_3=1558;		pos_4=900;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(400);
	
	//ת��
	pos_0=3000;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(700);
	
	//����
	pos_1=2570;		pos_2=720;    pos_3=1570;	
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
	
	//�ɿ�����
	pos_4=1200;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 100);
	delay_ms(300);
	
	//��е��̧��
	pos_1=2620;		pos_2=1204;   pos_3=1147;
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);	
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);	
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);	
	delay_ms(400);
	
	pos_0=1995;
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(700);
}
void place_actiongroup_car_B(void)//�����ŵ����϶�Ӧ��ɫλ��		v		v
{
	//��е��̧��
	pos_0=1965;		pos_1=2471;		pos_2=1048;
	pos_3=1558;		pos_4=900;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(400);
	
	//ת��
	pos_0=2666;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(500);
	
	//����
	pos_1=2503;		pos_2=703;    pos_3=1746;	
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
	
	//�ɿ�����
	pos_4=1200;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 100);
	delay_ms(300);
	
	//��е��̧��
	pos_1=2503;		pos_2=1180;   pos_3=1249;
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);	
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);	
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);	
	delay_ms(400);
	

	pos_0=1995;
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(500);
}

void get_actiongroup_car_B(void)//���������ץ��׼�������ڵ�ͼ��		v		v
{
	//ת��
	//��������,��һ����B
	pos_0=542;		pos_1=1635;		pos_2=2738;
	pos_3=2795;		pos_4=1300;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	delay_ms(1300);
	
	//�½��߶ȣ�׼��ץȡ
	pos_1=1752;		pos_2=3360;
	pos_3=2250;		pos_4=1200;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
  delay_ms(600);
	
	//ץȡ���
	pos_4=900;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
 delay_ms(200);
	
 //̧���е��
	pos_1=1681;		pos_2=2683;
	pos_3=2829;		pos_4=900;	
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
 delay_ms(300);
}
void get_actiongroup_car_G(void)//���������ץ��׼�������ڵ�ͼ��		v		v
{
	//ת��
	pos_0=884;		pos_1=1761;		pos_2=2677;
	pos_3=2989;		pos_4=1200;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(1200);
	
	//���͸߶�
	pos_0=884;		pos_1=1606;		pos_2=3407;
	pos_3=2406;		pos_4=1200;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(700);
	
	//ץȡ���
	pos_4=900;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
    delay_ms(200);
	
  //̧���е��
	pos_0=884;   pos_1=1590;		pos_2=2731;
	pos_3=2961;		pos_4=900;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(200);
}
void get_actiongroup_car_R(void)//���������ץ��׼�������ڵ�ͼ��		v		v
{
	//ת��
	pos_0=1234;		pos_1=1677;		pos_2=2809;
	pos_3=2741;		pos_4=1300;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(1100);
	//�½��߶ȣ�׼��ץȡ
	pos_0=1235;   pos_1=1808;		pos_2=3425;
	pos_3=2172;		pos_4=1300;	
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(600);
//	
	//ץȡ���
	pos_4=900;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(300);
//	
  //̧���е��
	pos_0=1211;   pos_1=1596;		pos_2=2907;
	pos_3=2759;		pos_4=900;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(100);
}
void catch_actiongroup_map_R(void)//�ּӹ�����ץȡ��鶯��		v		v
{
    //׼������
	pos_1=1914;   pos_2=662;
	pos_3=3157;		pos_4=1300;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
	//ת��
	pos_0=1323; 
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	delay_ms(300);
	//���ͻ�е��
	pos_1=1275;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(400);
	//ǰ���е��
	pos_1=1140;  	pos_2=1122;  	pos_3=2862;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);   WritePosEx(3, pos_3, 3000, 50);	
	delay_ms(400);
	//ץȡ
	pos_4=900; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(200);
    //׼������
	pos_0=1240;   pos_1=1537;   pos_2=3164;
	pos_3=2439;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
	delay_ms(950);
	//����
	pos_0=1240;   pos_1=1725;   pos_2=3391;
	pos_3=2270;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
	WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
	WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
	WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
	WritePosEx(4, pos_4, 2000, 30);		WritePosEx(4, pos_4, 2000, 30);
	delay_ms(450);
	//�ɿ�
	pos_4=1200; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);

    //̧����
    pos_2=3028;pos_3=1852;
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
    //׼����һ��
    pos_1=1914;   pos_2=662;
	pos_3=3157;		pos_4=1300;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
}
void catch_actiongroup_map_G(void)//�ּӹ�����ץȡ��鶯��		v		v
{
	//׼������
	pos_1=1914;   pos_2=662;
	pos_3=3157;		pos_4=1300;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
	//ת��
	pos_0=926; 
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	delay_ms(300);
	//���ͻ�е��
	pos_1=1215;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(400);
	//ǰ���е��
	pos_1=1120;  	pos_2=901;  	pos_3=3134;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);   WritePosEx(3, pos_3, 3000, 50);	
	delay_ms(400);
	//ץȡ
	pos_4=900; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(200);
	//׼������
	pos_0=881;   pos_1=1537;   pos_2=3164;
	pos_3=2639;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
	delay_ms(950);
	//�½���е��
	pos_0=908;   pos_1=1630;   pos_2=3415;
	pos_3=2447;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
	WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
	WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
	WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
	WritePosEx(4, pos_4, 2000, 30);		WritePosEx(4, pos_4, 2000, 30);
	delay_ms(450);
	//�ɿ�
	pos_4=1200; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);

    //̧����
    pos_2=3130;pos_3=2030;
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
    //׼����һ��
    pos_1=1914;   pos_2=662;
	pos_3=3157;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	//WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
}
void catch_actiongroup_map_B(void)//�ּӹ�����ץȡ��鶯��		v		v
{
	//Ԥ������
	pos_1=1635;		pos_2=937;
	pos_3=3072;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
	
	//��ת
	pos_0=566;			
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
    delay_ms(300);
	
	//Ԥ������
	pos_1=1124;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
    delay_ms(300);
	
	//ǰ�춯��
	pos_1=1200;		pos_2=1133;    pos_3=2805;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
	
	//ץȡ
	pos_4=900;			
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(300);
	
    
    //׼������
	pos_0=565;   pos_1=1537;   pos_2=3064;
	pos_3=2539;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
	delay_ms(950);
	//����
	pos_0=565;		pos_1=1720;    pos_2=3409;		
	pos_3=2245;		pos_4=900;  		
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
    delay_ms(450);
  
	//��צ
	pos_4=1200;			
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(300);
   //̧����
    pos_2=3130;pos_3=2030;
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
    //׼����һ��
    pos_1=1914;   pos_2=662;
	pos_3=3157;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	//WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
}
void place_actiongroup_map_first_B(void)//�����ڵ��ϣ�������һ��		v		v
{
    pos_0=565;		pos_1=2276;		pos_2=1274;
    pos_3=2800;		pos_4=950;		
    WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
    WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
    WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(500);
     //���ն���
    pos_1=1070;	
    WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
    delay_ms(1200);
    //��צ
    pos_4=1300;				
    WritePosEx(4, pos_4, 3000, 30);		WritePosEx(4, pos_4, 3000, 30);
    delay_ms(300);

    //΢̧��
    pos_2=1230; pos_3=3373;				
    WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(300);

    //̧���е��
    pos_1=2288;		
    WritePosEx(1, pos_1, 2000, 50);		WritePosEx(1, pos_1, 2000, 50);
    delay_ms(300);

}

void place_actiongroup_map_first_G(void)//�����ڵ��ϣ�������һ��		v		v
{
	pos_0=935;		pos_1=2401;		pos_2=1009;
	pos_3=3095;		pos_4=950;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
//	
//	//���ն���
	pos_1=1045;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(1200);

	//��צ
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 30);		WritePosEx(4, pos_4, 3000, 30);
	delay_ms(300);
	//΢̧��
	pos_1=948;   pos_2=889;		pos_3=3427;				
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(350);
	//̧���е��
	pos_1=2233;				
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(350);

}
void place_actiongroup_map_first_R(void)//�����ڵ��ϣ�������һ��		v		v
{
	pos_0=1309;		pos_1=2198;		pos_2=1260;
	pos_3=2835;		pos_4=950;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(800);
//	
	//���ն���
	pos_1=1055;	
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(1100);
	//��צ
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 30);		WritePosEx(4, pos_4, 3000, 30);
	delay_ms(300);
	//΢̧��
	pos_3=3388;				
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	delay_ms(300);
	//̧���е��
	pos_0=1307;		pos_1=1892;		pos_2=2300;
	pos_3=3388;		pos_4=1300;		
	WritePosEx(0, pos_0, 2000, 50);		WritePosEx(0, pos_0, 2000, 50);
	WritePosEx(1, pos_1, 2000, 50);		WritePosEx(1, pos_1, 2000, 50);
	WritePosEx(2, pos_2, 2000, 50);		WritePosEx(2, pos_2, 2000, 50);
	WritePosEx(3, pos_3, 2000, 50);		WritePosEx(3, pos_3, 2000, 50);
	WritePosEx(4, pos_4, 2000, 50);		WritePosEx(4, pos_4, 2000, 50);
	delay_ms(200);
//	
}
void place_actiongroup_map_second_R(void)//������ڶ���		v
{
	//Ԥ������
	pos_0=1305;		pos_1=2425;		pos_2=991;
	pos_3=2726;		pos_4=950;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
	//���ն���
    pos_1=1401;
    WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
    delay_ms(1600);
//	//��צ
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);
    
	//΢̧
    pos_3=3090;		
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(300);
    //̧��
	pos_1=1640;		pos_2=3167;    pos_3=2273;		
    WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
    WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
    WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(500);

}
void place_actiongroup_map_second_G(void)//������ڶ���		v
{
	//Ԥ������
	pos_0=938;		pos_1=2523;		pos_2=704;
	pos_3=3026;		pos_4=950;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
	//���ն���
    pos_1=1455;
    WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
    delay_ms(1600);
//	//��צ
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);
    
	//΢̧
    pos_3=3300;		
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(300);
    //̧��
	pos_1=1640;		pos_2=3167;    pos_3=2273;		
    WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
    WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
    WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(500);

}
void place_actiongroup_map_second_B(void)//������ڶ���		v
{
	//Ԥ������
	pos_0=560;		pos_1=2483;		pos_2=981;
	pos_3=2788;		pos_4=950;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
	//���ն���
    pos_1=1410;
    WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
    delay_ms(1600);
//	//��צ
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);
    
	//΢̧
    pos_3=3250;		
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(300);
    //̧��
	pos_1=1640;		pos_2=3167;    pos_3=2273;		
    WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
    WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
    WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(500);
}

/*
*����Ϊ�����������Ϻ�Ķ�����Pro Max������
*/
void put_down_first_1(void)//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
{
	uint8_t i=0;
		for(i=0;i<3;i++)//789
		{
			if(QR_data[i]==1)
			{
				get_actiongroup_car_R();			place_actiongroup_map_first_R();
			}
			if(QR_data[i]==2)
			{
				get_actiongroup_car_G();			place_actiongroup_map_first_G();
			}
			if(QR_data[i]==3)
			{
				get_actiongroup_car_B();			place_actiongroup_map_first_B();
			}				
		}
}
void put_down_first_2(void)//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
{
	uint8_t i=0;
		for(i=3;i<6;i++)//789
		{
			if(QR_data[i]==1)
			{
				get_actiongroup_car_R();			place_actiongroup_map_first_R();
			}
			if(QR_data[i]==2)
			{
				get_actiongroup_car_G();			place_actiongroup_map_first_G();
			}
			if(QR_data[i]==3)
			{
				get_actiongroup_car_B();			place_actiongroup_map_first_B();
			}				
		}
}


void put_on_car(void)//���ն�ά��˳��,�����Ӵּӹ���ץ������
{
	uint8_t i=0;
	static uint8_t poc_flag=0;
	if(poc_flag)
	{
		for(i=3;i<6;i++)//
		{
			switch(QR_data[i])
			{
				case 1:catch_actiongroup_map_R();break;
				case 2:catch_actiongroup_map_G();break;
				case 3:catch_actiongroup_map_B();break;
				default: break;
			}
		}
	}
	else
	{
		for(i=0;i<3;i++)//
		{
			switch(QR_data[i])
			{
				case 1:catch_actiongroup_map_R();break;
				case 2:catch_actiongroup_map_G();break;
				case 3:catch_actiongroup_map_B();break;
				default: break;
			}
		}
	}
	poc_flag=1;
}

//void catch_from_circl(void)//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
//{
//	uint8_t i=0;
//	data[0]=0;//x
//	data[1]=0;//y
//	for(i=0;i<3;i++)
//	{
//		Bar_code(QR_data[i]);  //���ն�ά��˳��ץȡ����
//		Get_Stop(); //��ͣ����
//	  if(QR_data[i]==3)
//		{get_actiongroup_ring();place_actiongroup_car_B();scan_actiongroup_Bar();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
//		else if(QR_data[i]==2)
//		{get_actiongroup_ring();place_actiongroup_car_G();scan_actiongroup_Bar();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
//		else if(QR_data[i]==1)
//		{get_actiongroup_ring();place_actiongroup_car_R();scan_actiongroup_Bar();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
//	}
//}
void catch_from_circl_first(void)//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
{
	uint8_t i=0;
	tx2_data[0]=0;//x
	tx2_data[1]=0;//y
		for(i=0;i<3;i++)
		{
            tx2_data[0]=0;//x
            tx2_data[1]=0;//y
			scan_actiongroup_Barshou_fast(); //�����϶���
			delay_ms(5);
			Bar_code(QR_data[i]);  //���ն�ά��˳��ץȡ����
			delay_ms(50);
            
			Get_Stop(); //��ͣ����
			if(QR_data[i]==3)
			{get_actiongroup_ring();place_actiongroup_car_B();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
			else if(QR_data[i]==2)
			{get_actiongroup_ring();place_actiongroup_car_G();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
			else if(QR_data[i]==1)
			{get_actiongroup_ring();place_actiongroup_car_R();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
		}
    wait_Tx2();
}
void catch_from_circl_second(void)//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
{
	uint8_t i=3;
	tx2_data[0]=0;//x
	tx2_data[1]=0;//y
		for(i=3;i<6;i++)
		{
            tx2_data[0]=0;//x
            tx2_data[1]=0;//y
            scan_actiongroup_Barshou_fast(); //�����϶���
            delay_ms(5);
			Bar_code(QR_data[i]);  //���ն�ά��˳��ץȡ����
			delay_ms(50);
			Get_Stop(); //��ͣ����
			if(QR_data[i]==3)
			{get_actiongroup_ring();place_actiongroup_car_B();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
			else if(QR_data[i]==2)
			{get_actiongroup_ring();place_actiongroup_car_G();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ
			else if(QR_data[i]==1)
			{get_actiongroup_ring();place_actiongroup_car_R();} //QR_data[0-3] ���ζ�Ӧһ��λ-����λ

		}
    wait_Tx2();
}

void put_down_second(void)//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ�ڶ���
{
	static u8 i=0;

		for(i=3;i<6;i++)//789
		{
			if(QR_data[i]==1)
			{
				get_actiongroup_car_R();			place_actiongroup_map_second_R();
			}
			if(QR_data[i]==2)
			{
				get_actiongroup_car_G();			place_actiongroup_map_second_G();
			}
			if(QR_data[i]==3)
			{
				get_actiongroup_car_B();			place_actiongroup_map_second_B();
			}				
		}

}







