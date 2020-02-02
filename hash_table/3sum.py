def _3sum(a):
	a=sorted(a)
	n=len(a)
	triplets = set()
	for i in range(n):
		k = -a[i]
		start=i+1
		end=n-1
		
		while start<end:
			s=a[start]+a[end]
			if s==k:
				triplets.add( (a[i],a[start],a[end]) )
				start+=1
				end-=1
			elif s>k:
				end-=1
			else:
				start+=1

	m = []
	for z in triplets:
		m.append( [z[0],z[1],z[2]] )
	return m


t = int( input() )
while t>0:
	n = int( input() )
	a = list( map(int,input().split()) )
	# print(a)
	ans = _3sum(a)
	print(ans)
	t-=1


