def _3sum(a,target):
	a=sorted(a)
	n=len(a)
	mi =99999999
	ans = 0
	triplet = []
	for i in range(n):
		k = target-a[i]
		start=i+1
		end=n-1
		
		while start<end:
			s=a[start]+a[end]
			if k==s:
				d = abs(target-(a[i]+a[start]+a[end]))
				# triplet.append( [d,a[i]+a[start]+a[end]] )
				if d<mi:
					mi = d
					ans = a[i]+a[start]+a[end]

				start+=1
				end-=1
			elif s>k:
				d = abs(target-(a[i]+a[start]+a[end]))
				# triplet.append( [d,a[i]+a[start]+a[end]] )
				if d<mi:
					mi = d
					ans = a[i]+a[start]+a[end]
				end-=1
			else:
				d = abs(target-(a[i]+a[start]+a[end]))
				# triplet.append( [d,a[i]+a[start]+a[end]] )
				if d<mi:
					mi = d
					ans = a[i]+a[start]+a[end]
				start+=1

	# triplet = sorted(triplet)
	# ans = triplet[0][1]
	return ans
	


t = int( input() )
while t>0:
	n = int( input() )
	target = int( input() )
	a = list( map(int,input().split()) )
# print(a)
	ans = _3sum(a,target)
	print(ans)
	t-=1


