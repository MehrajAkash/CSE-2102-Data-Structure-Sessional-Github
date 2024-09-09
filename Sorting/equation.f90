15  read *,a,b,c
    if(a.eq.0.0)goto 15
    d=b**2-4.0*a*c
    p=-b/(2.0*a)
    q=sqrt(abs(d)/(2.0*a))
    if (d.ge.0.0)then
        print*"1st root=",p+q
        print*"2nd root=",p-q
    else
        print*,"1st root=",p,"+ I",q
        print*,"2nd root=",p,"-I",q
    end if
