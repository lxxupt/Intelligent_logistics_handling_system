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
*舵机动作组执行函数
*serialnum：动作组序号-----------------对 应 动 作 说 明						
*								0									      机械臂待机动作
*								1									      扫描二维码动作
*								2									      扫描物块颜色动作
*								
*/



uint16_t pos_0=0,pos_1=0,pos_2=0,pos_3=0,pos_4=0,pos_5=0;
void standby_actiongroup(void)//机械臂待机动作
{
	WritePosEx(0, 940, 1750, 50);			WritePosEx(0, 940, 1750, 50);
	WritePosEx(1, 1388, 1750, 50);		WritePosEx(1, 1388, 1750, 50);
	WritePosEx(2, 3130, 1750, 50);		WritePosEx(2, 3130, 1750, 50);
	WritePosEx(3, 3017, 1750, 50);		WritePosEx(3, 3017, 1750, 50);
	WritePosEx(4, 2048, 1750, 50);		WritePosEx(4, 2048, 1750, 50);
	WritePosEx(5, 2048, 1750, 50);		WritePosEx(5, 2048, 1750, 50);
	delay_ms(1200);
}

void scan_actiongroup_QR(void)//扫描二维码动作	
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
void scan_actiongroup_QR_fast(void)//快速扫描二维码动作	
{
  pos_0=1990;		pos_1=2709;		pos_2=695;
	pos_3=1438;		pos_4=1505;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}

void scan_actiongroup_Bar(void)//扫描物块颜色动作	
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
void scan_actiongroup_Bar_fast(void)//快速扫描物块颜色动作	
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
void scan_actiongroup_Barshou_fast(void)//收缩版快速扫描物块颜色动作	
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
    WritePosEx(0, 2829, 3000, 50);//0舵机转正前方
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
    WritePosEx(0, pos_0, 3000, 50);//0舵机转正前方
}
void guodu_fast(void)
{
    guodu1_fast();
    guodu2_fast();
}
void finish_lala(void)//收尾动作
{
	pos_0=1946;		pos_1=3091;		pos_2=693;
	pos_3=1269;		pos_4=1200;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}

void scan_actiongroup_color_ring_fast(void)//扫描色环颜色动作
{
	pos_0=2950;		pos_1=2115;		pos_2=2812;
	pos_3=3030;		pos_4=1600;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
}

void scan_zhijiao_fast(u8 mode)//mode ==1 为物料台矫正动作  mode ==2 为起点矫正动作
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


//void scan_actiongroup_QR(void)//扫描二维码动作	
//{
//	WritePosEx(0, 1974, 3000, 50);		WritePosEx(0, 1974, 3000, 50);
//	WritePosEx(1, 2471, 3000, 50);		WritePosEx(1, 2471, 3000, 50);
//	WritePosEx(2, 697, 3000, 50);		WritePosEx(2, 697, 3000, 50);
//	WritePosEx(3, 1670, 3000, 50);		WritePosEx(3, 1670, 3000, 50);
//	WritePosEx(4, 1500, 3000, 50);		WritePosEx(4, 1500, 3000, 50);
//}

//void scan_actiongroup_Bar(void)//扫描物块颜色动作	
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
//void scan_actiongroup_Bar_fast(void)//快速扫描物块颜色动作	
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
//    WritePosEx(0, 2829, 3000, 50);//0舵机转正前方
//    delay_ms(100);
//    while(ReadMove(0));
//}

//void guodu_fast(void)//快速扫描色环颜色动作
//{
//	pos_1=1887;		pos_2=2624;
//	pos_3=2458;		pos_4=1300;
//	//WritePosEx(0, pos_0, 3000, 30);		WritePosEx(0, pos_0, 3000, 30);
//	WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
//	WritePosEx(2, pos_2, 3000, 30);		WritePosEx(2, pos_2, 3000, 30);
//	WritePosEx(3, pos_3, 3000, 30);		WritePosEx(3, pos_3, 3000, 30);
//    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//	delay_ms(400);
//    WritePosEx(0, 2829, 3000, 50);//0舵机转正前方
//    delay_ms(100);
//}

//void scan_actiongroup_color_ring(void)//扫描色环颜色动作
//{
//	pos_0=2970;		pos_1=2115;		pos_2=2812;
//	pos_3=3030;		pos_4=1600;		
//	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
//	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
//	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
//	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
//	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
//}

//void scan_zhijiao(u8 mode)//mode ==1 为物料台矫正动作  mode ==2 为起点矫正动作
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


void scan_actiongroup_color_ring2(void)//精确扫描色环颜色动作
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
void get_actiongroup_ring(void)//圆盘处抓取物块动作		v
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
void place_actiongroup_car_R(void)//将物块放到车上对应颜色位置		v		v
{
	//机械臂抬起
	pos_0=1965;		pos_1=2471;		pos_2=1048;
	pos_3=1558;		pos_4=900;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(400);
	
	//转向
	pos_0=3328;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(850);
	
	//放下
	pos_1=2500;		pos_2=767;    pos_3=1581;	
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
	
	//松开物料
	pos_4=1200;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 100);
	delay_ms(300);
	
	//机械臂抬起
	pos_1=2503;		pos_2=1224;   pos_3=1149;
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);	
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);	
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);	
	delay_ms(400);
	

	pos_0=1995;
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(850);
}
void place_actiongroup_car_G(void)//将物块放到车上对应颜色位置		v		v
{
	//机械臂抬起
	pos_0=1965;		pos_1=2471;		pos_2=1048;
	pos_3=1558;		pos_4=900;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(400);
	
	//转向
	pos_0=3000;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(700);
	
	//放下
	pos_1=2570;		pos_2=720;    pos_3=1570;	
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
	
	//松开物料
	pos_4=1200;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 100);
	delay_ms(300);
	
	//机械臂抬起
	pos_1=2620;		pos_2=1204;   pos_3=1147;
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);	
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);	
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);	
	delay_ms(400);
	
	pos_0=1995;
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(700);
}
void place_actiongroup_car_B(void)//将物块放到车上对应颜色位置		v		v
{
	//机械臂抬起
	pos_0=1965;		pos_1=2471;		pos_2=1048;
	pos_3=1558;		pos_4=900;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(400);
	
	//转向
	pos_0=2666;		
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(500);
	
	//放下
	pos_1=2503;		pos_2=703;    pos_3=1746;	
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);
	delay_ms(400);
	
	//松开物料
	pos_4=1200;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 100);
	delay_ms(300);
	
	//机械臂抬起
	pos_1=2503;		pos_2=1180;   pos_3=1249;
	WritePosEx(1, pos_1, 2250, 50);		WritePosEx(1, pos_1, 2250, 50);	
	WritePosEx(2, pos_2, 2250, 50);		WritePosEx(2, pos_2, 2250, 50);	
	WritePosEx(3, pos_3, 2250, 50);		WritePosEx(3, pos_3, 2250, 50);	
	delay_ms(400);
	

	pos_0=1995;
	WritePosEx(0, pos_0, 2250, 50);		WritePosEx(0, pos_0, 2250, 50);
	delay_ms(500);
}

void get_actiongroup_car_B(void)//将车上物块抓起，准备放置在地图上		v		v
{
	//转向
	//调整动作,下一个是B
	pos_0=542;		pos_1=1635;		pos_2=2738;
	pos_3=2795;		pos_4=1300;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	delay_ms(1300);
	
	//下降高度，准备抓取
	pos_1=1752;		pos_2=3360;
	pos_3=2250;		pos_4=1200;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
  delay_ms(600);
	
	//抓取物块
	pos_4=900;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
 delay_ms(200);
	
 //抬起机械臂
	pos_1=1681;		pos_2=2683;
	pos_3=2829;		pos_4=900;	
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
 delay_ms(300);
}
void get_actiongroup_car_G(void)//将车上物块抓起，准备放置在地图上		v		v
{
	//转向
	pos_0=884;		pos_1=1761;		pos_2=2677;
	pos_3=2989;		pos_4=1200;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(1200);
	
	//降低高度
	pos_0=884;		pos_1=1606;		pos_2=3407;
	pos_3=2406;		pos_4=1200;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(700);
	
	//抓取物块
	pos_4=900;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
    delay_ms(200);
	
  //抬起机械臂
	pos_0=884;   pos_1=1590;		pos_2=2731;
	pos_3=2961;		pos_4=900;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(200);
}
void get_actiongroup_car_R(void)//将车上物块抓起，准备放置在地图上		v		v
{
	//转向
	pos_0=1234;		pos_1=1677;		pos_2=2809;
	pos_3=2741;		pos_4=1300;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(1100);
	//下降高度，准备抓取
	pos_0=1235;   pos_1=1808;		pos_2=3425;
	pos_3=2172;		pos_4=1300;	
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(600);
//	
	//抓取物块
	pos_4=900;
	WritePosEx(4, pos_4, 2250, 50);		WritePosEx(4, pos_4, 2250, 50);
	delay_ms(300);
//	
  //抬起机械臂
	pos_0=1211;   pos_1=1596;		pos_2=2907;
	pos_3=2759;		pos_4=900;		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(100);
}
void catch_actiongroup_map_R(void)//粗加工区处抓取物块动作		v		v
{
    //准备动作
	pos_1=1914;   pos_2=662;
	pos_3=3157;		pos_4=1300;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
	//转向
	pos_0=1323; 
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	delay_ms(300);
	//降低机械臂
	pos_1=1275;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(400);
	//前伸机械臂
	pos_1=1140;  	pos_2=1122;  	pos_3=2862;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);   WritePosEx(3, pos_3, 3000, 50);	
	delay_ms(400);
	//抓取
	pos_4=900; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(200);
    //准备动作
	pos_0=1240;   pos_1=1537;   pos_2=3164;
	pos_3=2439;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
	delay_ms(950);
	//最终
	pos_0=1240;   pos_1=1725;   pos_2=3391;
	pos_3=2270;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
	WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
	WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
	WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
	WritePosEx(4, pos_4, 2000, 30);		WritePosEx(4, pos_4, 2000, 30);
	delay_ms(450);
	//松开
	pos_4=1200; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);

    //抬起来
    pos_2=3028;pos_3=1852;
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
    //准备下一次
    pos_1=1914;   pos_2=662;
	pos_3=3157;		pos_4=1300;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
}
void catch_actiongroup_map_G(void)//粗加工区处抓取物块动作		v		v
{
	//准备动作
	pos_1=1914;   pos_2=662;
	pos_3=3157;		pos_4=1300;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(400);
	//转向
	pos_0=926; 
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	delay_ms(300);
	//降低机械臂
	pos_1=1215;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(400);
	//前伸机械臂
	pos_1=1120;  	pos_2=901;  	pos_3=3134;  		
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);   WritePosEx(3, pos_3, 3000, 50);	
	delay_ms(400);
	//抓取
	pos_4=900; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(200);
	//准备动作
	pos_0=881;   pos_1=1537;   pos_2=3164;
	pos_3=2639;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
	delay_ms(950);
	//下降机械臂
	pos_0=908;   pos_1=1630;   pos_2=3415;
	pos_3=2447;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
	WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
	WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
	WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
	WritePosEx(4, pos_4, 2000, 30);		WritePosEx(4, pos_4, 2000, 30);
	delay_ms(450);
	//松开
	pos_4=1200; 
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);

    //抬起来
    pos_2=3130;pos_3=2030;
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
    //准备下一次
    pos_1=1914;   pos_2=662;
	pos_3=3157;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	//WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
}
void catch_actiongroup_map_B(void)//粗加工区处抓取物块动作		v		v
{
	//预备动作
	pos_1=1635;		pos_2=937;
	pos_3=3072;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
	
	//旋转
	pos_0=566;			
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
    delay_ms(300);
	
	//预备动作
	pos_1=1124;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
    delay_ms(300);
	
	//前伸动作
	pos_1=1200;		pos_2=1133;    pos_3=2805;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
	
	//抓取
	pos_4=900;			
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(300);
	
    
    //准备动作
	pos_0=565;   pos_1=1537;   pos_2=3064;
	pos_3=2539;		pos_4=900;			
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
	delay_ms(950);
	//最终
	pos_0=565;		pos_1=1720;    pos_2=3409;		
	pos_3=2245;		pos_4=900;  		
	WritePosEx(0, pos_0, 2000, 40);		WritePosEx(0, pos_0, 2000, 40);
	WritePosEx(1, pos_1, 2000, 40);		WritePosEx(1, pos_1, 2000, 40);
	WritePosEx(2, pos_2, 2000, 40);		WritePosEx(2, pos_2, 2000, 40);
	WritePosEx(3, pos_3, 2000, 40);		WritePosEx(3, pos_3, 2000, 40);
	WritePosEx(4, pos_4, 2000, 40);		WritePosEx(4, pos_4, 2000, 40);
    delay_ms(450);
  
	//松爪
	pos_4=1200;			
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(300);
   //抬起来
    pos_2=3130;pos_3=2030;
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(400);
    //准备下一次
    pos_1=1914;   pos_2=662;
	pos_3=3157;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	//WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
}
void place_actiongroup_map_first_B(void)//物块放于地上，或码垛第一层		v		v
{
    pos_0=565;		pos_1=2276;		pos_2=1274;
    pos_3=2800;		pos_4=950;		
    WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
    WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
    WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
    delay_ms(500);
     //最终动作
    pos_1=1070;	
    WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
    delay_ms(1200);
    //松爪
    pos_4=1300;				
    WritePosEx(4, pos_4, 3000, 30);		WritePosEx(4, pos_4, 3000, 30);
    delay_ms(300);

    //微抬起
    pos_2=1230; pos_3=3373;				
    WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
    WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(300);

    //抬起机械臂
    pos_1=2288;		
    WritePosEx(1, pos_1, 2000, 50);		WritePosEx(1, pos_1, 2000, 50);
    delay_ms(300);

}

void place_actiongroup_map_first_G(void)//物块放于地上，或码垛第一层		v		v
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
//	//最终动作
	pos_1=1045;			
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(1200);

	//松爪
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 30);		WritePosEx(4, pos_4, 3000, 30);
	delay_ms(300);
	//微抬起
	pos_1=948;   pos_2=889;		pos_3=3427;				
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
    delay_ms(350);
	//抬起机械臂
	pos_1=2233;				
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(350);

}
void place_actiongroup_map_first_R(void)//物块放于地上，或码垛第一层		v		v
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
	//最终动作
	pos_1=1055;	
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	delay_ms(1100);
	//松爪
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 30);		WritePosEx(4, pos_4, 3000, 30);
	delay_ms(300);
	//微抬起
	pos_3=3388;				
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	delay_ms(300);
	//抬起机械臂
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
void place_actiongroup_map_second_R(void)//物块码垛第二层		v
{
	//预备动作
	pos_0=1305;		pos_1=2425;		pos_2=991;
	pos_3=2726;		pos_4=950;		
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
	//最终动作
    pos_1=1401;
    WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
    delay_ms(1600);
//	//松爪
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);
    
	//微抬
    pos_3=3090;		
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(300);
    //抬起
	pos_1=1640;		pos_2=3167;    pos_3=2273;		
    WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
    WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
    WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(500);

}
void place_actiongroup_map_second_G(void)//物块码垛第二层		v
{
	//预备动作
	pos_0=938;		pos_1=2523;		pos_2=704;
	pos_3=3026;		pos_4=950;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
	//最终动作
    pos_1=1455;
    WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
    delay_ms(1600);
//	//松爪
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);
    
	//微抬
    pos_3=3300;		
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(300);
    //抬起
	pos_1=1640;		pos_2=3167;    pos_3=2273;		
    WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
    WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
    WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(500);

}
void place_actiongroup_map_second_B(void)//物块码垛第二层		v
{
	//预备动作
	pos_0=560;		pos_1=2483;		pos_2=981;
	pos_3=2788;		pos_4=950;	
	WritePosEx(0, pos_0, 3000, 50);		WritePosEx(0, pos_0, 3000, 50);
	WritePosEx(1, pos_1, 3000, 50);		WritePosEx(1, pos_1, 3000, 50);
	WritePosEx(2, pos_2, 3000, 50);		WritePosEx(2, pos_2, 3000, 50);
	WritePosEx(3, pos_3, 3000, 50);		WritePosEx(3, pos_3, 3000, 50);
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(500);
	//最终动作
    pos_1=1410;
    WritePosEx(1, pos_1, 3000, 30);		WritePosEx(1, pos_1, 3000, 30);
    delay_ms(1600);
//	//松爪
	pos_4=1300;				
	WritePosEx(4, pos_4, 3000, 50);		WritePosEx(4, pos_4, 3000, 50);
	delay_ms(300);
    
	//微抬
    pos_3=3250;		
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(300);
    //抬起
	pos_1=1640;		pos_2=3167;    pos_3=2273;		
    WritePosEx(0, pos_0, 2000, 30);		WritePosEx(0, pos_0, 2000, 30);
    WritePosEx(1, pos_1, 2000, 30);		WritePosEx(1, pos_1, 2000, 30);
    WritePosEx(2, pos_2, 2000, 30);		WritePosEx(2, pos_2, 2000, 30);
    WritePosEx(3, pos_3, 2000, 30);		WritePosEx(3, pos_3, 2000, 30);
    delay_ms(500);
}

/*
*以下为各个动作组结合后的动作组Pro Max动作组
*/
void put_down_first_1(void)//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
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
void put_down_first_2(void)//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
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


void put_on_car(void)//按照二维码顺序,将物块从粗加工区抓到车上
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

//void catch_from_circl(void)//从圆盘处，先判停，再按二维码顺序抓取物料
//{
//	uint8_t i=0;
//	data[0]=0;//x
//	data[1]=0;//y
//	for(i=0;i<3;i++)
//	{
//		Bar_code(QR_data[i]);  //按照二维码顺序抓取物料
//		Get_Stop(); //判停物料
//	  if(QR_data[i]==3)
//		{get_actiongroup_ring();place_actiongroup_car_B();scan_actiongroup_Bar();} //QR_data[0-3] 依次对应一号位-三号位
//		else if(QR_data[i]==2)
//		{get_actiongroup_ring();place_actiongroup_car_G();scan_actiongroup_Bar();} //QR_data[0-3] 依次对应一号位-三号位
//		else if(QR_data[i]==1)
//		{get_actiongroup_ring();place_actiongroup_car_R();scan_actiongroup_Bar();} //QR_data[0-3] 依次对应一号位-三号位
//	}
//}
void catch_from_circl_first(void)//从圆盘处，先判停，再按二维码顺序抓取物料
{
	uint8_t i=0;
	tx2_data[0]=0;//x
	tx2_data[1]=0;//y
		for(i=0;i<3;i++)
		{
            tx2_data[0]=0;//x
            tx2_data[1]=0;//y
			scan_actiongroup_Barshou_fast(); //看物料动作
			delay_ms(5);
			Bar_code(QR_data[i]);  //按照二维码顺序抓取物料
			delay_ms(50);
            
			Get_Stop(); //判停物料
			if(QR_data[i]==3)
			{get_actiongroup_ring();place_actiongroup_car_B();} //QR_data[0-3] 依次对应一号位-三号位
			else if(QR_data[i]==2)
			{get_actiongroup_ring();place_actiongroup_car_G();} //QR_data[0-3] 依次对应一号位-三号位
			else if(QR_data[i]==1)
			{get_actiongroup_ring();place_actiongroup_car_R();} //QR_data[0-3] 依次对应一号位-三号位
		}
    wait_Tx2();
}
void catch_from_circl_second(void)//从圆盘处，先判停，再按二维码顺序抓取物料
{
	uint8_t i=3;
	tx2_data[0]=0;//x
	tx2_data[1]=0;//y
		for(i=3;i<6;i++)
		{
            tx2_data[0]=0;//x
            tx2_data[1]=0;//y
            scan_actiongroup_Barshou_fast(); //看物料动作
            delay_ms(5);
			Bar_code(QR_data[i]);  //按照二维码顺序抓取物料
			delay_ms(50);
			Get_Stop(); //判停物料
			if(QR_data[i]==3)
			{get_actiongroup_ring();place_actiongroup_car_B();} //QR_data[0-3] 依次对应一号位-三号位
			else if(QR_data[i]==2)
			{get_actiongroup_ring();place_actiongroup_car_G();} //QR_data[0-3] 依次对应一号位-三号位
			else if(QR_data[i]==1)
			{get_actiongroup_ring();place_actiongroup_car_R();} //QR_data[0-3] 依次对应一号位-三号位

		}
    wait_Tx2();
}

void put_down_second(void)//按二维码顺序，从车上取下对应颜色物块并置于地图第二层
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







