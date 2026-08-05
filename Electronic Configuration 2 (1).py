#elctronic configuration
from Element import element
from elementname import at_no
import math as m
'''unicode codes for superscript and subscript of numbers
0 is U+2070
1 is U+00B9
2 is U+00B2
3 is U+00B3
4 is U+2074
5 is U+2075
6 is U+2076
7 is U+2077
8 is U+2078
9 is U+2079
eg. print(x\u00B9) will print x to the power 1'''
Q=input("Would you like to enter the element's name [enter en] or atomic number [enter an]? : ")
if Q=='an':
    atomic_no=int(input("Enter the atomic number : "))
elif Q=='en':
    element_name=input("Enter the element name : ")
    atomic_no=at_no(element_name)
    if atomic_no<0:
        print("This element is unknown.")
if atomic_no>0:
    cs,cp,cd,cf=1,2,3,4#here, cs = coefficient of s, cp = coefficient of p, and so on
    p=0#here, p is power(no. of electrons)`
    econfig=''
    a=''
    period=''
    block=''
    type=''
    an1=atomic_no 
    print('ELectronic Configuration :',end=' ')
    Argon='1s\u00B2 2s\u00B2 2p\u2076 3s\u00B2 3p\u2076'
    Krypton=Argon+' 4s\u00B2 3d\u00B9\u2070 4p\u2076'
    Xenon=Krypton+' 5s\u00B2 4d\u00B9\u2070 5p\u2076'
    Radon=Xenon+' 6s\u00B2 4f\u00B9\u2074 5d\u00B9\u2070 6p\u2076'
    if atomic_no==24:
        print(Argon," 4s\u00B9 3d\u2075")
        an1=0
        block='d-block'
        group=6
        print('Group :',group)
    elif atomic_no==29:
        print(Argon," 4s\u00B9 3d\u00B9\u2070")
        an1=0
        block='d-block'
        group=11
        print('Group :',group)
    elif atomic_no==41:
        print(Krypton," 5s\u00B9 4d\u2074")
        an1=0
        block='d-block'
        group=5
        print('Group :',group)
    elif atomic_no==42:
        print(Krypton," 5s\u00B9 4d\u2075")
        an1=0
        block='d-block'
        group=6
        print('Group :',group)
    elif atomic_no==44:
        print(Krypton," 5s\u00B9 4d\u2077")
        an1=0
        block='d-block'
        group=8
        print('Group :',group)
    elif atomic_no==45:
        print(Krypton," 5s\u00B9 4d\u2078")
        an1=0
        block='d-block'
        group=9
        print('Group :',group)
    elif atomic_no==46:
        print(Krypton," 5s\u2070 4d\u00B9\u2070")
        an1=0
        block='d-block'
        group=10
        print('Group :',group)
    elif atomic_no==47:
        print(Krypton," 5s\u00B9 4d\u00B9\u2070")
        an1=0
        block='d-block'
        group=11
        print('Group :',group)
    elif atomic_no==57:
        print(Xenon," 6s\u00B2 5d\u00B9")
        an1=0
        block='d-block'
        group=3
        print('Group :',group)
    elif atomic_no==58:
        print(Xenon," 6s\u00B2 4f\u00B9 5d\u00B9")
        an1=0
        block='f-block'
        group=4
        print('Group :',group)
    elif atomic_no==64:
        print(Xenon," 6s\u00B2 4f\u2077 5d\u00B9")
        an1=0
        block='f-block'
        group=3
        print('Group :',group)
    elif atomic_no==71:
        print(Xenon," 6s\u00B2 4f\u00B9\u2074 5d\u00B9")
        an1=0
        block='f-block'
        group=3
        print("Group :",group)
    elif atomic_no==78:
        print(Xenon," 6s\u00B9 4f\u00B9\u2074 5d\u2079")
        an1=0
        block='d-block'
        group=10
        print('Group :',group)
    elif atomic_no==79:
        print(Xenon," 6s\u00B9 4f\u00B9\u2074 5d\u00B9\u2070")
        an1=0
        block='d-block'
        group=11
        print('Group :',group)
    elif atomic_no==89:
        print(Radon," 7s\u00B2 6d\u00B9")
        an1=0
        block='f-block'
        group=3
        print('Group :',group)
    elif atomic_no==90:
        print(Radon," 7s\u00B2 6d\u00B2")
        an1=0
        block='f-block'
        group=4
        print('Group :',group)
    elif atomic_no==91:
        print(Radon,' 7s\u00B2 5f\u00B2 6d\u00B9')
        an1=0
        block='f-block'
        group=5
        print('Group :',group)
    elif atomic_no==92:
        print(Radon,' 7s\u00B2 5f\u00B3 6d\u00B9')
        an1=0
        block='f-block'
        group=6
        print('Group :',group)
    elif atomic_no==93:
        print(Radon,' 7s\u00B2 5f\u2074 6d\u00B9')
        an1=0
        block='f-block'
        group=7
        print('Group :',group)
    elif atomic_no==103:
        print(Radon,' 7s\u00B2 5f\u00B9\u2074 7p\u00B9')
        an1=0
        block='f-block'
        group=3
        print('Group :',group)
    while an1>0:
        if an1>=2:
            p=2
        elif an1<2:
            p=an1
        if p==1:
            powerss='\u00B9'#powerss stands for the superscript of the power(the power is written on top of the string)
        elif p==2:
            powerss='\u00B2'
        econfig=str(cs)+'s'+powerss
        print(econfig,end=' ')
        an1-=2
        if an1<=0 and atomic_no<119:
            group=int(m.fabs(an1))
            print('')
            print("Group :",group)
        cs+=1
        if an1<=0:
            block = 's-block'
            break
        if cd>4 and an1>0:
            if an1>=14:
                p=14
            elif an1<14:
                p=an1
            a='f '+str(p)
            if p==1:
                powerss='\u00B9'
            elif p==2:
                powerss='\u00B2'
            elif p==3:
                powerss='\u00B3'
            elif p==4:
                powerss='\u2074'
            elif p==5:
                powerss='\u2075'
            elif p==6:
                powerss='\u2076'
            elif p==7:
                powerss='\u2077'
            elif p==8:
                powerss='\u2078'
            elif p==9:
                powerss='\u2079'
            elif p==10:
                powerss='\u00B9\u2070'
            elif p==11:
                powerss='\u00B9\u00B9'
            elif p==12:
                powerss='\u00B9\u00B2'
            elif p==13:
                powerss='\u00B9\u00B3'
            elif p==14:
                powerss='\u00B9\u2074'
            econfig=str(cf)+'f'+powerss
            print(econfig,end=' ')
            an1-=14
            if an1<=0 and atomic_no<119:
                group=3
                print('')
                print("Group :",group)
            cf+=1
        if an1<=0:
            block = 'f-block'
            break
        if cp>3 and an1>0:
            if an1>=10:
                p=10
            elif an1<10:
                p=an1
            a='d '+str(p)
            if p==1:
                powerss='\u00B9'
            elif p==2:
                powerss='\u00B2'
            elif p==3:
                powerss='\u00B3'
            elif p==4:
                powerss='\u2074'
            elif p==5:
                powerss='\u2075'
            elif p==6:
                powerss='\u2076'
            elif p==7:
                powerss='\u2077'
            elif p==8:
                powerss='\u2078'
            elif p==9:
                powerss='\u2079'
            elif p==10:
                powerss='\u00B9\u2070'
            econfig=str(cd)+'d'+powerss
            print(econfig,end=' ')
            an1-=10
            if an1<0 and atomic_no<119:
                group=an1+12
                print('')
                print("Group :",group)
            cd+=1
        if an1<=0:
            block = 'd-block'
            break
        if cs>2 and an1>0:
            if an1>=6:
                p=6
            elif an1<6:
                p=an1
            a='p '+str(p)
            if p==1:
                powerss='\u00B9'
            elif p==2:
                powerss='\u00B2'
            elif p==3:
                powerss='\u00B3'
            elif p==4:
                powerss='\u2074'
            elif p==5:
                powerss='\u2075'
            elif p==6:
                powerss='\u2076'
            econfig=str(cp)+'p'+powerss
            print(econfig,end=' ')
            an1-=6
            if an1<=0 and atomic_no<119:
                group=an1+12
                print("")
                print("Group :",group)
            cp+=1
        if an1<=0:
            block = 'p-block'
            break
    if atomic_no>118:
        group='unknown'
        print("Group : unknown")
    print("Block :",block)
    if atomic_no<3:
        period = '1'
    elif atomic_no>2 and atomic_no<11:
        period = '2'
    elif atomic_no>10 and atomic_no<19:
        period = '3'
    elif atomic_no>18 and atomic_no<37:
        period = '4'
    elif atomic_no>36 and atomic_no<55:
        period = '5'
    elif atomic_no>54 and atomic_no<87:
        period = '6'
    elif atomic_no>86 and atomic_no<119:
        period = '7'
    elif atomic_no>118:
        period='unknown'
    print("Period :",period)
    if group==1 and atomic_no!=1:
        type='Alkali Metal'   
    elif group==2:
        type='Alkaline Earth Metal'
    elif block=='d-block' and atomic_no not in range(109,112):
        type='Transition Metal'
    elif (group==13 and atomic_no!=5) or atomic_no in range(81,85) or atomic_no==50:
        type='Post Transition Metal'
    elif atomic_no==5 or atomic_no==14 or atomic_no==32 or atomic_no==33 or atomic_no==51 or atomic_no==52:
        type='Metalloid'
    elif group==18 and atomic_no!=118:
        type='Noble Gas'
    elif atomic_no in range(57,72):
        type='Lanthanides'
    elif atomic_no in range(89,104):
        type='Actinides'
    elif atomic_no>=109 and atomic_no!=112:
        type='Unwnown Properties'
    elif group==17 and atomic_no!=117:
        type='Halogens'
    elif atomic_no==1 or atomic_no in range(6,9) or atomic_no==15 or atomic_no==16 or atomic_no==34:
        type='Other Non-Metals'
    print("Properties :",type)  
name=element(atomic_no)
    