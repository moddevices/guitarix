v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 41300 45600 1 270 0 resistor-2.sym
{
T 41650 45200 5 10 0 0 270 0 1
device=RESISTOR
T 41600 45200 5 10 1 1 0 0 1
refdes=R1
T 41600 44900 5 10 1 1 0 0 1
value=220k
}
C 42700 45700 1 180 0 resistor-2.sym
{
T 42300 45350 5 10 0 0 180 0 1
device=RESISTOR
T 42216 45434 5 10 1 1 180 0 1
refdes=R2
T 42300 45300 5 10 1 1 0 0 1
value=680k
}
C 43700 44700 1 270 0 resistor-2.sym
{
T 44050 44300 5 10 0 0 270 0 1
device=RESISTOR
T 44000 44400 5 10 1 1 0 0 1
refdes=R3
T 44000 44200 5 10 1 1 0 0 1
value=820
}
C 43500 48200 1 270 0 resistor-2.sym
{
T 43850 47800 5 10 0 0 270 0 1
device=RESISTOR
T 43800 47800 5 10 1 1 0 0 1
refdes=R4
T 43800 47600 5 10 1 1 0 0 1
value=100k
}
C 45900 46700 1 0 0 capacitor-1.sym
{
T 46100 47400 5 10 0 0 0 0 1
device=CAPACITOR
T 46200 47200 5 10 1 1 0 0 1
refdes=C3
T 46100 47600 5 10 0 0 0 0 1
symversion=0.1
T 46200 46500 5 10 1 1 0 0 1
value=100n
}
C 41300 44400 1 0 0 gnd-1.sym
C 41200 43600 1 0 0 triode.sym
{
T 44000 46400 5 10 1 1 0 0 1
refdes=U1
T 43900 46100 5 10 1 1 0 0 1
value=12au7
T 43600 45700 5 10 0 1 0 0 1
device=TRIODE
}
C 40600 45500 1 0 0 input-1.sym
{
T 40600 45800 5 10 0 0 0 0 1
device=INPUT
T 40727 45534 5 10 1 1 0 0 1
refdes=Vin
}
N 42700 45600 42800 45600 4
C 43700 43100 1 0 0 gnd-1.sym
C 45000 46700 1 0 0 ccurrent.sym
{
T 45200 47200 5 10 1 1 0 0 1
refdes=CC1
T 45400 47000 5 10 0 1 0 0 1
device=CONNECTION_CURRENT
}
N 45000 46900 43600 46900 4
{
T 44700 47000 5 10 1 1 0 0 1
netname=4
}
C 43400 48400 1 0 0 generic-power-1.sym
{
T 43600 48600 5 10 0 1 0 0 1
device=POWER
T 43932 48649 5 10 1 1 0 0 1
value=250V
T 43409 48652 5 10 1 1 0 0 1
refdes=Vcc1
}
C 49600 46300 1 0 0 output-1.sym
{
T 49700 46600 5 10 0 0 0 0 1
device=OUTPUT
T 49889 46337 5 10 1 1 0 0 1
refdes=Vout
}
N 43800 43400 43800 43800 4
N 43800 44700 43800 44900 4
N 43600 48400 43600 48200 4
{
T 43400 48300 5 10 1 1 0 0 1
netname=5
}
N 43600 46400 43600 47300 4
N 45900 46900 45800 46900 4
{
T 45800 47000 5 10 1 1 0 0 1
netname=6
}
N 41400 45600 41800 45600 4
C 49000 45700 1 0 0 gnd-1.sym
N 49100 46900 46800 46900 4
C 46400 46100 1 0 0 resistor-2.sym
{
T 46800 46450 5 10 0 0 0 0 1
device=RESISTOR
T 46600 46400 5 10 1 1 0 0 1
refdes=R7
T 46600 45900 5 10 1 1 0 0 1
value=1M2
}
N 47500 46900 47500 46200 4
N 47500 46200 47300 46200 4
N 46400 46200 42700 46200 4
N 42700 46200 42700 45600 4
C 49000 46900 1 270 0 resistor-variable-2.sym
{
T 49400 46350 5 10 1 1 90 8 1
refdes=VR1
T 49900 46100 5 10 0 1 90 8 1
device=VARIABLE_RESISTOR
T 47900 45300 5 10 1 1 0 0 1
value=var=gain,value=1M,inv=1,a=1
}