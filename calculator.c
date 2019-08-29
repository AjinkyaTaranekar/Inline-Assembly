// Type your code here, or load an example.
int main(){
    int x,y;
    int a,s,m,d,mod;
    scanf("%d%d",&x,&y);
    //add
    __asm{
        mov eax,x
        mov edi,y
        add eax,edi
        mov a,edi
    }
    printf("add: %d",a);
    //sub
    __asm{
        mov eax,x
        mov edi,y
        sub eax,edi
        mov s,edi
    }
    printf("sub: %d",s);
    //multiply
    __asm{
        mov eax,x
        imul y
        mov m,edi
    }
    printf("mul: %d",m);
    //div
    __asm{
        mov eax,x
        idiv y
        mov d,edi
    }
    printf("div: %d",d);
    //mod
    __asm{
        mov eax,x
        idiv y
        mov a,edx
    }
    printf("rem: %d",mod);
}
