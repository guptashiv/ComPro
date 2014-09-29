def isbouncy(n):
  s=[x for x in str(n)]
  t=sorted(s)
  u=t[::-1]
  return (not(s==t or s==u))
  

r=0
i=1
rat=0.0
while(rat<.99):
  if(isbouncy(i)):
    r+=1
  rat=float(r)/float(i)
  i+=1
  print(rat)

print(i)