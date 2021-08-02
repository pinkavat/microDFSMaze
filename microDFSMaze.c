int w,h,*a;D(i){a[i]=1;for(int t=0,r=
rand()%4;t<4;){int d=(r+t++)%4,s=(d>1
?-1:1)*(d&1?w:1),p=i+s*2;!a[p]?a[i+s]
=1,D(p):0;}}main(int c,char**v){/***/
srand(time(0));w=atoi(v[1]);h=atoi(//
v[2]);int i,z=w*h,q[z];a=q;for(i=0;i<
z;i++)a[i]=(i+1)%w<2||i<w||i>=z-w?1:0
;D(2*w+2);for(i=0;i<z;i++)printf(/**/
"\e[%um  %s",a[i]?0:7,i%w+1==w?"\n" :
"");}//DFS, Thomas Pinkava, July 2020
