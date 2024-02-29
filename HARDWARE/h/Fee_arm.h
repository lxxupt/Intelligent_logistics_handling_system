#ifndef __FEE_ARM_H
#define __FEE_ARM_H

#include "sys.h"
#include "SCS.h"
#include "SMS_STS.h"
#include "delay.h"
#include "run.h"

extern uint16_t pos_0,pos_1,pos_2,pos_3,pos_4,pos_5;
void scan_actiongroup_color_ring2(void);//精确扫描色环颜色动作
int abs(int num);
void Get_Stop(void);

void standby_actiongroup(void);//机械臂待机动作			v








/*可快速衔接动作*/
void scan_actiongroup_QR(void);//扫描二维码动作
void scan_actiongroup_QR_fast(void);//扫描二维码动作
void scan_actiongroup_Bar(void);//扫描物块颜色动作
void scan_actiongroup_Bar_fast(void);//快速扫描物块颜色动作
void scan_actiongroup_Barshou_fast(void);//收缩版快速扫描物块颜色动作	
void scan_actiongroup_color_ring_fast(void);//扫描色环颜色动作
void scan_zhijiao_fast(u8 mode);//直角矫正动作
void finish_lala(void);//收尾动作

void shuzhi(void);//摆放到竖直状态
void shuzhi_fast(void);
void xiangqian(void);//转正
void xiangqian_fast(void);
void guodu1(void);//弯曲摆放
void guodu2(void);//转正
void guodu1_fast(void);
void guodu2_fast(void);
void guodu_fast(void);



/*搬运功能动作*/
void get_actiongroup_ring(void);//圆盘处抓取物块动作		v

void place_actiongroup_car_R(void);//将物块放到车上对应颜色位置		v
void place_actiongroup_car_G(void);//将物块放到车上对应颜色位置		
void place_actiongroup_car_B(void);//将物块放到车上对应颜色位置		

void catch_actiongroup_map_R(void);//粗加工区处抓取物块动作
void catch_actiongroup_map_G(void);//粗加工区处抓取物块动作
void catch_actiongroup_map_B(void);//粗加工区处抓取物块动作

void get_actiongroup_car_R(void);//将车上物块抓起，准备放置在地图上
void get_actiongroup_car_G(void);//将车上物块抓起，准备放置在地图上
void get_actiongroup_car_B(void);//将车上物块抓起，准备放置在地图上

void place_actiongroup_map_first_R(void);//物块放于地上，或码垛第一层
void place_actiongroup_map_first_G(void);//物块放于地上，或码垛第一层
void place_actiongroup_map_first_B(void);//物块放于地上，或码垛第一层

void place_actiongroup_map_second_R(void);//物块码垛第二层
void place_actiongroup_map_second_G(void);//物块码垛第二层
void place_actiongroup_map_second_B(void);//物块码垛第二层

void put_down_first_1(void);//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
void put_down_first_2(void);//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
void put_on_car(void);//按照二维码顺序,将物块从粗加工区抓到车上
void catch_from_circl_first(void);//从圆盘处，先判停，再按二维码顺序抓取物料
void catch_from_circl_second(void);//从圆盘处，先判停，再按二维码顺序抓取物料
void catch_from_circl_2(void);
void put_down_second(void);//按二维码顺序，从车上取下对应颜色物块并置于地图第一层











//void scan_actiongroup_QR(void);//扫描二维码动作			v
//void scan_actiongroup_Bar(void);//扫描物块颜色动作			v
//void scan_actiongroup_color_ring(void);//扫描色环颜色动作
//void scan_zhijiao(u8 mode);

//void get_actiongroup_ring(void);//圆盘处抓取物块动作		v

//void place_actiongroup_car_R(void);//将物块放到车上对应颜色位置		v
//void place_actiongroup_car_G(void);//将物块放到车上对应颜色位置		
//void place_actiongroup_car_B(void);//将物块放到车上对应颜色位置		

//void catch_actiongroup_map_R(void);//粗加工区处抓取物块动作
//void catch_actiongroup_map_G(void);//粗加工区处抓取物块动作
//void catch_actiongroup_map_B(void);//粗加工区处抓取物块动作

//void get_actiongroup_car_R(void);//将车上物块抓起，准备放置在地图上
//void get_actiongroup_car_G(void);//将车上物块抓起，准备放置在地图上
//void get_actiongroup_car_B(void);//将车上物块抓起，准备放置在地图上

//void place_actiongroup_map_first_R(void);//物块放于地上，或码垛第一层
//void place_actiongroup_map_first_G(void);//物块放于地上，或码垛第一层
//void place_actiongroup_map_first_B(void);//物块放于地上，或码垛第一层

//void place_actiongroup_map_second_R(void);//物块码垛第二层
//void place_actiongroup_map_second_G(void);//物块码垛第二层
//void place_actiongroup_map_second_B(void);//物块码垛第二层

//void put_down_first_1(void);//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
//void put_down_first_2(void);//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
//void put_on_car(void);//按照二维码顺序,将物块从粗加工区抓到车上
//void catch_from_circl_first(void);//从圆盘处，先判停，再按二维码顺序抓取物料
//void catch_from_circl_second(void);//从圆盘处，先判停，再按二维码顺序抓取物料
//void catch_from_circl_2(void);
//void put_down_second(void);//按二维码顺序，从车上取下对应颜色物块并置于地图第一层
//void guodu_fast(void);//快速扫描色环颜色动作
//void scan_actiongroup_Bar_fast(void);//快速扫描物块颜色动作
//void shuzhi(void);//摆放到竖直状态
//void guodu_1(void);//扫描色环颜色动作

#endif


