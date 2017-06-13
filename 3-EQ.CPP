#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	printf("ax+by+cz=k\ndx+ey+fz=l\ngx+hy+iz=m\nin this format enter values");
	int a,b,c,d,e,f,g,h,i,k,l,m;
	printf("\na= ");scanf("%d",&a);printf("\tb= ");scanf("%d",&b);printf("\tc= ");scanf("%d",&c);printf("\tk= ");scanf("%d",&k);
	printf("\nd= ");scanf("%d",&d);printf("\te= ");scanf("%d",&e);printf("\tf= ");scanf("%d",&f);printf("\tl= ");scanf("%d",&l);
	printf("\ng= ");scanf("%d",&g);printf("\th= ");scanf("%d",&h);printf("\ti= ");scanf("%d",&i);printf("\tm= ");scanf("%d",&m);
	float u_11,u_12,u_13,u_22,u_23,u_33,l_21,l_31,l_32,v_1,v_2,v_3,x,y,z;
	u_11=a;u_12=b;u_13=c;l_21=d;u_22=e-(l_21*u_12);u_23=f-(l_21*u_13);l_31=g/u_11;l_32=(h-(l_31*u_12))/u_22;u_33=i-(l_31*u_13)-(l_32*u_23);
	v_1=k;v_2=l-(l_21*v_1);v_3=m-(l_31*v_1-l_32*v_2);
	z=v_3/u_33;y=(v_2-u_23*z)/u_22;x=(v_1-u_12*y-u_13*z)/u_11;
       //	if(x='-NAN'&&y='-NAN'&&z='-NAN')
	//printf("\ninconsistent");
	//else
	printf("\nx=%f\ny=%f,z=%f",x,y,z);
	getch();
}