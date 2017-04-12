# lab3
< HOW TO COMPILE QUESTION A? >
g++ .
< empirical resuls for questionB >
while n = 1000
  sort()=0.00026 seconds
  insertion_sort()=0.015735 seconds
while n = 10000
  sort()=0.003055 seconds
  insertion_sort()=1.31852 seconds
while n = 100000
  sort()=0.041734 seconds
  insertion_sort()=124.813 seconds
while n = 1000000
  sort()=0.482181 seconds
  insertion_sort()=12149 seconds
< explanation for partB >
The time complexity of sort() is O(n log n),
and the time complexity of inseertion_sort() is O(n^2),
when it comes to dealing with large amounts of datas,
sort() would be much faster than insertion_sort().

