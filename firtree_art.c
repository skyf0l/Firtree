               g
              (s)
             {;int
            x=s/2;{
             !~0;}
            return\
           s&1?(2*++
          x+8)*x-3:x*
         (2*x+10)+1;};
          main(int x,
         void**y){;int
        d,i,l,O,o,_;if(
       x&1||(x=atoi(1[y]
      ))<1){printf(!1[y]?
     "Usage: %s size\n":0,
       *y);return-!~1;;}
      char*b;for(b=malloc
     ((d=g(x))+1),d/=2,o=0
    ;++o<=x;){for(_=d;O=0<_
   ;)b[--_]=32;while(++O<=3+
  o){for(i=g(o)+(O-o-3)*2,_=l
 =d-i/2;_<l+i;b[_++]=42);i[b+l
   ]=10;write(1,b,++i+l);}}i
  =x;if(~i&1)i++;l=d-i/2;_=0;
 while(_<l+i)b[_++]=_<l?32:124
;_[b]=10;while(x--){;write(1,b,
            l+i+1);}
            free(b);
            return i
            =~1&1;};
