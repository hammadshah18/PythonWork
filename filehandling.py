f=open('fileHandling.txt','w')
f.write('hammadshah')
f.close()


f=open('file.txt','w')
f.write('hammad')
f.close()

f=open('file1.txt','a')
f.write('\nshah')
f.close()



# for write multiple Lines
l=['\n hello','\n i am','\n Muhammad','\n hammad']
f=open('file.txt','a')
f.writelines(l)
f.close()


s=f.read()
print(s)
f.close()


#  using of with open ---> it is automatically close th file when its end
with open('file.txt','a') as f:
  f.write('\n shah')


  with open('file.txt','r') as f:
   print(f.readline())
while True:
  s= open('file.txt','r')
  if s !='':
    break
  else:
    print(s)



    with open('file.txt','r') as f:
  print(f.readlines(10))
  print(f.readlines(10))
  print(f.readlines(10))