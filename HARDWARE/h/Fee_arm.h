#ifndef __FEE_ARM_H
#define __FEE_ARM_H

#include "sys.h"
#include "SCS.h"
#include "SMS_STS.h"
#include "delay.h"
#include "run.h"

extern uint16_t pos_0,pos_1,pos_2,pos_3,pos_4,pos_5;
void scan_actiongroup_color_ring2(void);//��ȷɨ��ɫ����ɫ����
int abs(int num);
void Get_Stop(void);

void standby_actiongroup(void);//��е�۴�������			v








/*�ɿ����νӶ���*/
void scan_actiongroup_QR(void);//ɨ���ά�붯��
void scan_actiongroup_QR_fast(void);//ɨ���ά�붯��
void scan_actiongroup_Bar(void);//ɨ�������ɫ����
void scan_actiongroup_Bar_fast(void);//����ɨ�������ɫ����
void scan_actiongroup_Barshou_fast(void);//���������ɨ�������ɫ����	
void scan_actiongroup_color_ring_fast(void);//ɨ��ɫ����ɫ����
void scan_zhijiao_fast(u8 mode);//ֱ�ǽ�������
void finish_lala(void);//��β����

void shuzhi(void);//�ڷŵ���ֱ״̬
void shuzhi_fast(void);
void xiangqian(void);//ת��
void xiangqian_fast(void);
void guodu1(void);//�����ڷ�
void guodu2(void);//ת��
void guodu1_fast(void);
void guodu2_fast(void);
void guodu_fast(void);



/*���˹��ܶ���*/
void get_actiongroup_ring(void);//Բ�̴�ץȡ��鶯��		v

void place_actiongroup_car_R(void);//�����ŵ����϶�Ӧ��ɫλ��		v
void place_actiongroup_car_G(void);//�����ŵ����϶�Ӧ��ɫλ��		
void place_actiongroup_car_B(void);//�����ŵ����϶�Ӧ��ɫλ��		

void catch_actiongroup_map_R(void);//�ּӹ�����ץȡ��鶯��
void catch_actiongroup_map_G(void);//�ּӹ�����ץȡ��鶯��
void catch_actiongroup_map_B(void);//�ּӹ�����ץȡ��鶯��

void get_actiongroup_car_R(void);//���������ץ��׼�������ڵ�ͼ��
void get_actiongroup_car_G(void);//���������ץ��׼�������ڵ�ͼ��
void get_actiongroup_car_B(void);//���������ץ��׼�������ڵ�ͼ��

void place_actiongroup_map_first_R(void);//�����ڵ��ϣ�������һ��
void place_actiongroup_map_first_G(void);//�����ڵ��ϣ�������һ��
void place_actiongroup_map_first_B(void);//�����ڵ��ϣ�������һ��

void place_actiongroup_map_second_R(void);//������ڶ���
void place_actiongroup_map_second_G(void);//������ڶ���
void place_actiongroup_map_second_B(void);//������ڶ���

void put_down_first_1(void);//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
void put_down_first_2(void);//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
void put_on_car(void);//���ն�ά��˳��,�����Ӵּӹ���ץ������
void catch_from_circl_first(void);//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
void catch_from_circl_second(void);//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
void catch_from_circl_2(void);
void put_down_second(void);//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��











//void scan_actiongroup_QR(void);//ɨ���ά�붯��			v
//void scan_actiongroup_Bar(void);//ɨ�������ɫ����			v
//void scan_actiongroup_color_ring(void);//ɨ��ɫ����ɫ����
//void scan_zhijiao(u8 mode);

//void get_actiongroup_ring(void);//Բ�̴�ץȡ��鶯��		v

//void place_actiongroup_car_R(void);//�����ŵ����϶�Ӧ��ɫλ��		v
//void place_actiongroup_car_G(void);//�����ŵ����϶�Ӧ��ɫλ��		
//void place_actiongroup_car_B(void);//�����ŵ����϶�Ӧ��ɫλ��		

//void catch_actiongroup_map_R(void);//�ּӹ�����ץȡ��鶯��
//void catch_actiongroup_map_G(void);//�ּӹ�����ץȡ��鶯��
//void catch_actiongroup_map_B(void);//�ּӹ�����ץȡ��鶯��

//void get_actiongroup_car_R(void);//���������ץ��׼�������ڵ�ͼ��
//void get_actiongroup_car_G(void);//���������ץ��׼�������ڵ�ͼ��
//void get_actiongroup_car_B(void);//���������ץ��׼�������ڵ�ͼ��

//void place_actiongroup_map_first_R(void);//�����ڵ��ϣ�������һ��
//void place_actiongroup_map_first_G(void);//�����ڵ��ϣ�������һ��
//void place_actiongroup_map_first_B(void);//�����ڵ��ϣ�������һ��

//void place_actiongroup_map_second_R(void);//������ڶ���
//void place_actiongroup_map_second_G(void);//������ڶ���
//void place_actiongroup_map_second_B(void);//������ڶ���

//void put_down_first_1(void);//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
//void put_down_first_2(void);//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
//void put_on_car(void);//���ն�ά��˳��,�����Ӵּӹ���ץ������
//void catch_from_circl_first(void);//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
//void catch_from_circl_second(void);//��Բ�̴�������ͣ���ٰ���ά��˳��ץȡ����
//void catch_from_circl_2(void);
//void put_down_second(void);//����ά��˳�򣬴ӳ���ȡ�¶�Ӧ��ɫ��鲢���ڵ�ͼ��һ��
//void guodu_fast(void);//����ɨ��ɫ����ɫ����
//void scan_actiongroup_Bar_fast(void);//����ɨ�������ɫ����
//void shuzhi(void);//�ڷŵ���ֱ״̬
//void guodu_1(void);//ɨ��ɫ����ɫ����

#endif


