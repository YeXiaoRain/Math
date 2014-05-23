def my_print(st,ch,times):
	if times==0:
		print (st,end='')
		return
	if st!='0' :
		print (st,end='')
	for i in range(times):
		print (ch,end='')
def main():
	for i in range(1,10):
		my_print('9','0',i)
		print('=9*',end='')
		my_print('1','0',i)
		print('=9*(',end='')
		my_print('0','9',i)
		print('+1)=9*(9*',end='')
		my_print('0','1',i)
		print('+1)')
	print()

	for i in range(1,10):
		for j in range(1,i+1):
			print(j,end='')
		print('*9*9+%d*9+1=9*(9*'% (i+1),end='')
		my_print('0','1',i)
		print('+1)+(',end='')

		if i==1 :
			print(0,end='')
		for j in range(1,i):
			print(j,end='')
		print('*9*9+%d*9+1)='% i,end='')
		my_print('9','0',i)
		print('+',end='')
		my_print('1','0',i)
		print('=',end='')
		my_print('1','0',i+1)
		print()
	print()

	for i in range(1,10):
		for j in range(1,i+1):
			print(j,end='')
		print('*9+%d=('%(i+1),end='')
		my_print('1','0',i+1)
		print('-1)/9=',end='')
		my_print('1','1',i)
		print()
	print()
main()
