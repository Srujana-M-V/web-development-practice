data=[
    ['sunny','warm','normal','strong','warm','same','yes'],
    ['sunny','warm','high','strong','warm','same','yes'],
    ['rainy','cold','high','strong','warm','change','no'],
    ['sunny','warm','high','strong','cool','change','yes'],
]
hypothesis=[]
for i in data:
    if i[-1]=='yes':
        hypothesis=i[:-1]
        break
    for i in data:
    if i[-1] == 'yes':
       for j in range(len(hypothesis)):
           if i[j] != hypothesis[j]:
               hypothesis[j] ='?'
               print('final hypothesis')
               print(hypothesis)
