/*Qualifying Round problem Facebook Hackercup 2015--New Year's Resolution.Implemented a subset sum problem in C */
#include <stdio.h>
int isSubsetSum(int setp[],int setc[],int setf[], int n, int sump,int sumc,int sumf)
{
   if (sump==0&&sumc==0&&sumf==0)
     return 1;
   if (n == 0 && (sump!=0 || sumc!=0 || sumf!=0))return 0;
   if (setp[n-1]>sump || setc[n-1]>sumc || setf[n-1]>sumf)
     return isSubsetSum(setp,setc,setf,n-1,sump,sumc,sumf);
return isSubsetSum(setp,setc,setf,n-1,sump,sumc,sumf)||isSubsetSum(setp,setc,setf,n-1,sump-setp[n-1],sumc-setc[n-1],sumf-setf[n-1]);
}
int main()
{
  int T,Gp,Gc,Gf,N,i,c=0;	
  scanf("%d",&T);
  while(T>0)
  { 
    c++;
  	scanf("%d%d%d%d",&Gp,&Gc,&Gf,&N);
  	int P[N],C[N],F[N];
  	for(i=0;i<N;i++)scanf("%d%d%d",&P[i],&C[i],&F[i]);
  	if(isSubsetSum(P,C,F,N,Gp,Gc,Gf)==1)
  	printf("Case #%d: yes\n",c);
  	else
  	printf("Case #%d: no\n",c);
  	T--;
  }
  return 0;
}
