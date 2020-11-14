program bubblesort

integer, dimension(6) :: a
integer :: i,j,n=6,temp
print *, "Enter the values to be sorted"
do i = 1, 6
      read*,a(i)
   end do
i=1

do while(i<n)
j=1
do while(j<n)
if(a(j) > a(j+1))then
temp = a(j);
a(j) = a(j+1);
a(j+1) = temp;
end if
j=j+1
end do
i=i+1
end do
print *,"The sorted values are: "
do i = 1,6
      print*,a(i)
   end do

end program bubblesort
