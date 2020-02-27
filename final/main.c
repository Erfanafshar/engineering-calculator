#include <stdio.h>
float sum(float a , float b)
{
    float res;
    res= a + b ;
    return res ;
}
float sub(float a , float b)
{
    float res ;
    res=a-b ;
    return res ;
}
float multiplication(float a , float b)
{
    float res ;
    res=a*b ;
    return res ;
}
float division(float a , float b)
{
    if (b==0)
    {
        printf("invalid input \n");
    }
    else
    {
    float res ;
    res=a/b ;
    return res ;
    }
}
int residual(int a , int b)
{
    if (b==0)
    {
        printf("invalid input \n");
    }
    else
    {
    int res ;
    res=a%b ;
    return res ;
    }
}
float power(float a , float b)
{
    int i ;
    float res=1.0;
    for (i=1;i<=b;i++)
    {
        res*=a;
    }
    return res ;
}
float factorial(int a)
{
    if(a<0)
    {
        printf("invalid input \n");
    }
    else
    {
    int i ;
    float res=1;
    for (i=1;i<=a;i++)
    {
        res*=i;
    }
    return res ;
    }
}
float inverse(float a)
{
    if (a==0)
    {
        printf("invalid input \n");
    }
    else
    {
    float res ;
    res = 1/a;
    return res ;
    }

}
float sin(float a)
{
    int i=0 ;
    float res=0.0 , b=0.0 , c=0.0 ;
    while (i!=20)
    {
        b+=((power(a,4*i+1))/(factorial(4*i+1)));
        c+=((power(a,4*i+3))/(factorial(4*i+3)));
        i++;
    }
    res=b-c;
    return res ;
}
float cos(float a)
{
    float res=0.0 , b=0.0 , c=0.0 ;
    int i=0;
    while (i!=20)
    {
        b+=((power(a,4*i))/(factorial(4*i)));
        c+=((power(a,4*i+2))/(factorial(4*i+2)));
        i++;
    }
    res=b-c;
    return res ;
}
float tan(float a)
{
    float res ;
    res =((sin(a))/(cos(a)));
    return res ;
}
int base(int a , int b , int c)
{
    int d=0 , i=0 , e=0 , res , f=0 , g=0 ;
    if (c>b)
    {
        while(a!=0)
        {
            d=a%10;
            e+=(d*power(b,i));
            a=(a-d)/10;
            i++;
        }
        i=0;
            if (c==10)
            {
                res=e ;
                return res ;
            }
            else ;
            if (c<10)
            {
                while(e!=0)
                {
                    f=e%c;
                    g+=(f*power(10,i));
                    e=e/c;
                    i++;
                }
                res=g;
                return res ;
            }
            else ;
    }
    else ;
    if(b>c)
    {
        if(b==10)
        {
            while (a!=0)
            {
                d=a%c;
                e+=(d*power(10,i));
                a=a/c;
                i++;
            }
            res=e;
            return res ;
        }
        else ;
        if(b<10)
        {
            while (a!=0)
            {
                d=a%10;
                e+=(d*power(9,i));
                a=(a-d)/10;
                i++;
            }
            i=0;
            while(e!=0)
            {
                f=e%c;
                g+=(f*power(10,i));
                e=(e-f)/c;
                i++;
            }
            res=g;
            return res ;
        }

    }
    else ;
}
float ln(float a)
{
    float b=0 , c=0 , d=0 , res , i , e;
    if(a>0 && a<2)
    {
        for(i=1.0;i<20;i++)
        {
            b+=((power(a-1,2*i-1))/(2*i-1));
            c+=((power(a-1,2*i))/(2*i));
        }
        d=b-c;
        res=d;
        return res ;
    }
    else
    {
        e=inverse(a);
        for(i=1;i<20;i++)
        {
            b+=((power(e-1,2*i-1))/(2*i-1));
            c+=((power(e-1,2*i))/(2*i));
        }
        d=c-b;
        res=d;
        return res;
    }
}
int combination(int a ,int b)
{
    int c , res ;
    c=b-a;
    res=((factorial(b))/((factorial(a))*(factorial(c))));
    return res ;
}
float ridge(float a ,float b)
{
    float i , res , j ;
        for(j=1;j<1000;j++)
        {
            if(b==2j)
            {
                for(i=0;i<=100;i+=0.001)
                {
                    if (power(i,b)<=(a+0.1) && power(i,b)>=(a-0.1))
                    {
                        break ;
                    }
                    else ;
                }
                res=i;
                return res ;
            }
            else
            {
                for(i=-100;i<=100;i+=0.001)
                {
                    if (power(i,b)<=(a+0.1) && power(i,b)>=(a-0.1))
                    {
                        break ;
                    }
                    else ;
                }
                res=i;
                return res ;
            }
        }


}
void error_check(char x)
{
    int o=0;
    if (x=='m' || x=='d' || x=='a' || x=='s' || x=='M' || x=='S' || x=='C' || x=='t' || x=='p' || x=='f' || x=='r' || x=='b' || x=='L' || x=='c' || x=='q')
    {
        o++;
    }
    else
    {
        printf("out of range input \n");
    }
    ;
}
void print(char x , float a , float b , float res , float c)
{
    if (x=='a')
    {
        printf("the sum of %f and %f is equal to %f \n",a,b,res);
    }
    else ;
    if (x=='s')
    {
        printf("the sub of %f and %f is equal to %f \n",a,b,res);
    }
    else ;
    if (x=='m')
    {
        printf("the multiplication of %f and %f is equal to %f \n",a,b,res);
    }
    else ;
    if (x=='d')
    {
        if (b!=0)
        {
            printf("the division of %f to %f is equal to %f \n",a,b,res);
        }
        else ;
    }
    else ;
    if (x=='M')
    {
        if(b!=0)
        {
        printf("the residual of %f to %f is %f \n",a,b,res);
        }
        else ;
    }
    else ;
    if (x=='p')
    {
        printf("%f to the power of %f is equal to %f\n",a,b,res);
    }
    else ;
    if (x=='f')
    {
        if (a>=0)
        {
             printf("factorial of %f is %f\n",a,res);
        }
        else ;
    }
    else ;
    if (x=='r')
    {
        if (a!=0)
        {
            printf("the inverse of %f is %f\n",a,res);
        }
        else ;
    }
    else ;
    if (x=='S')
    {
        printf("the sin of %f is %.10f\n",a,res);
    }
    else ;
    if (x=='C')
    {
        printf("the cos of %f is %f\n",a,res);
    }
    else ;
    if (x=='t')
    {
        printf("the tan of %f is %f\n",a,res);
    }
    else ;
    if (x=='b')
    {
        printf("the %f in %f base is equal to %f in %f base\n",a,b,res,c);
    }
    else ;
    if (x=='L')
    {
        printf("the ln of %f is %f \n",a,res);
    }
    else ;
    if (x=='c')
    {
        printf("the combination of %f is %f is equal to %f \n",a,b,res);
    }
    if (x=='q')
    {
        printf("the root of %f at base %f is equal to %f \n",a,b,res);
    }
    else ;
}
float main (void)
{
    char x ;
    float a , b , c , z;
    printf("enter your operation character : \n");
    do
    {
    scanf("%c",&x);
    error_check(x);
    if (x=='b')
    {
        printf("enter your first number and that basis and the result basis : \n");
        scanf("%f%f%f",&a,&b,&c);
    }
    else ;
    if (x=='a' || x=='s' || x=='m' || x=='d' || x=='M' || x=='p' || x=='c' || x=='q')
    {
        printf("enter your two numbers : \n");
        scanf("%f%f",&a,&b);
    }
    else ;
    if (x=='f' || x=='r' || x=='S' || x=='C' || x=='t' || x=='L')
    {
        printf("enter your number : \n");
        scanf("%f",&a);
    }
    else ;
    if (x=='a')
    {
        z=sum(a , b);
        print('a',a,b,z,c);
    }
    else ;
    if (x=='s')
    {
        z=sub(a , b);
        print('s',a,b,z,c);
    }
    else ;
    if (x=='m')
    {
        z=multiplication(a , b);
        print('m',a,b,z,c);
    }
    else ;
    if (x=='d')
    {
        z=division(a , b);
        print('d',a,b,z,c);
    }
    else ;
    if (x=='M')
    {
        z=residual(a , b);
        print('M',a,b,z,c);
    }
    else ;
    if (x=='p')
    {
        z=power(a , b);
        print('p',a,b,z,c);
    }
    else ;
    if (x=='f')
    {
        z=factorial(a);
        print('f',a,b,z,c);
    }
    else ;
    if (x=='r')
    {
        z=inverse(a);
        print('r',a,b,z,c);
    }
    else ;
    if (x=='S')
    {
        z=sin(a);
        print('S',a,b,z,c);
    }
    else ;
    if (x=='C')
    {
        z=cos(a);
        print('C',a,b,z,c);
    }
    else ;
    if (x=='t')
    {
        z=tan(a);
        print('t',a,b,z,c);
    }
    else ;
    if (x=='b')
    {
        z=base(a,b,c);
        print('b',a,b,z,c);
    }
    else ;
    if (x=='L')
    {
        z=ln(a);
        print('L',a,b,z,c);
    }
    else ;
    if (x=='c')
    {
        z=combination(a,b);
        print('c',a,b,z,c);
    }
    else ;
    if (x=='q')
    {
        z=ridge(a,b);
        print('q',a,b,z,c);
    }
    else ;
    }while(x!='*');
return 0;
}
