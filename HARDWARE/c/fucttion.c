#include "fucttion.h"

int16_t lpf(int16_t input)																		
{		
	static int16_t err=0;
	static int16_t out=170;
	float k=0.7f;
	err=input;
	out=k*out+(1-k)*err;
	return out;
}
int16_t lpf_x(int16_t input)																		
{		
	static int16_t err_x=0;
	static int16_t out_x=170;
	float k=0.7f;
	err_x=input;
	out_x=k*out_x+(1-k)*err_x;
	return out_x;
}
int16_t lpf_y(int16_t input)																		
{		
	static int16_t err_y=0;
	static int16_t out_y=170;
	float k=0.7f;
	err_y=input;
	out_y=k*out_y+(1-k)*err_y;
	return out_y;
}


