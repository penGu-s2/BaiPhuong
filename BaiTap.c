#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
  int n,i;
  int a[n];
  int tong=0;
  printf("Nhap n = ");
  scanf("%d", &n);
  for(i=0; i<n ;i++){
  	 printf("\nNhap phan tu a[%d] = ", i);
  	scanf("%d",&a[i]);
	  }
	  //tính tong
	  for(i=0;i<n;i++){
	  	tong+=a[i];
		  }
		printf("Tong =%d\n",tong);
		
		//Tính TB
		printf("Trung binh =%.2f",(float)tong/n);
	return 0;
}

//Bài 2
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
 void sapxep(float a[], int m)
    {
        int i = 0, j = 0;
        float temp;
        for(i = 0; i < m; i++)
        {
            for(j = i+1; j < m; j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(i = 0; i<m; i++)
        {
            printf(" %.2f", a[i]);
        }
    }
    bool kiemtranto(int n){
    	int i;
    	if (n < 2)
        return false;
    	for (i = 2; i <= sqrt(n); i++)
   		{
      	  if (n % i == 0)
        {
            return false;
        }
    }
    return true;
	}
	void xoa(int a[], int vt, int m){
		int i;
    for(i=vt;i<m;i++)
        a[i]=a[i+1];
    m--;
	}
	void xoanto(float a[], int m)
	{
		int i;
		int count = 0;
   		 for (i = 0; i < m; i++)
    	{
        	if(kiemtranto(a[i])==true)
       		{
       		    xoa(a,i,m);
       			i--;
       			m--;
			   }
    	}
    	 for(i = 0; i<m; i++)
        {
            printf(" %.2f", a[i]);
        }
		}
int main()
{
  int m;
  int i,j,k;
  float tg;
  float a[100];
  
  printf("Nhap m = ");
  scanf("%d", &m);
  for(i=0; i<m ;i++){
  	 printf("\nNhap phan tu a[%d]  = ", i);
  	scanf("%f",&a[i]);
	  }
	sapxep(a,m);
	printf("\n");
    printf("So lon nhat la: %.2f\n", a[m-1]);
    printf("So nho nhat la: %.2f\n", a[0]); 
    
    printf("\nNhap phan tu k = ", k);
  	scanf("%d",&k);
  	
  	 printf("So nho nhat thu %d: %.2f\n", k,a[k-1]); 
  	 
  	 xoanto(a,m);
	return 0;
}
//bài 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
 int demX(float a[], int m,float x)
    {
        int i = 0, j = 0;
        int dem=0;
        for(i = 0; i < m; i++)
        {
            if (a[i]==x) dem++;
        }
      return dem;
    }
int main()
{
  int m;
  int i,j,k;
  float tg;
  float a[100];
  int dem=0;
  printf("Nhap m = ");
  scanf("%d", &m);
  for(i=0; i<m ;i++){
  	 printf("\nNhap phan tu a[%d]  = ", i);
  	scanf("%f",&a[i]);
	  }
	   printf("\nNhap so x = ");
  	scanf("%f",&tg);
	  dem=demX(a,m,tg);
	if(dem!=0){
       	 printf("\nSo %.2f co xuat hien ",tg);
       	 printf("\n");
       	  printf("so lan xuat hien la  = %d", dem);
		   }
	return 0;
}
//bai 4
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
 void kiemtradandau(int a[], int m)
    {	
    	int flag=1;
        int i = 0, j = 0;
        for(i = 0; i < m; i++)
        {
            if((a[i]*a[i+1])<0) flag=0;
        }
    
        if(flag==0){
        	printf("\nDay la day dan dau!");
			}
		else{
			printf("\nDay khong phai day dan dau!");
		}
    }
void kiemtradoixung(int a[],int m){
	int dem=0;
	int i;
    for(i=0;i<m;i++){
        if(a[i]!=a[m-1-i])
            dem++;
    }
    if(dem==0)
    	printf("\nMang doi xung");
       
    else
    	printf("\nMang khong doi xung");
 
}
void kiemtratang(int a[],int m){
	int i;
	int flag=0;
	for(i=0;i<m;i++){
        if(a[i]<a[i+1])
           flag=1;
    }
     if(flag==1){
        	printf("\nDay la day tang!");
			}
		else{
			printf("\nDay khong phai day tang!");
		}
}
void kiemtragiam(int a[],int m){
	int i;
	int flag=0;
	for(i=0;i<m;i++){
        if(a[i]<a[i+1])
           flag=1;
    }
     if(flag==1){
        	printf("\nDay khong la day giam!");
			}
		else{
			printf("\nDay la day giam!");
		}
}
void kiemtratong(int a[],int m){
	int i;
	int tongchan=0;
	int tongle=0;
	int flag=0;
	for(i=0;i<m;i++){
        if(a[i]%2==0)
          {
          	tongchan+=a[i];
		  }else{
		  	tongle+=a[i];
		  }
    }
    
        printf("\nTong chan la :%d",tongchan);
		printf("\nTong le la :%d",tongle);
}
void tinhtongdandau(int a[],int m){
	int i;
	int S;
	int tong1=0;
	int tong2=0;
	int flag=0;
	for(i=0;i<m;i=i+2){
        tong1+=a[i];
    }
    for(i=1;i<m;i=i+2){
        tong2+=a[i];
    }
    
        printf("\nTong S la :%d",tong1+(tong2)*(-1));
	
}

int main()
{
  int m;
  int i,j,k;
  int a[100];
  int dem=0;
  printf("Nhap m = ");
  scanf("%d", &m);
  for(i=0; i<m ;i++){
  	 printf("\nNhap phan tu a[%d]  = ", i);
  	scanf("%d",&a[i]);
	  }
	kiemtradandau(a,m);
	kiemtradoixung(a,m);
	kiemtratang(a,m);
	kiemtragiam(a,m);
	kiemtratong(a,m);
	tinhtongdandau(a,m);
	return 0;
}
