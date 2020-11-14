!Dot Product of two vectors

program dp
              integer, dimension(5) :: a, b
              a = (/1, 2, 3, 4, 5/)
              b = (/6, 7, 8, 9, 10/)
              print '(5i5)', a
              print *
              print '(5i5)', b
              print *
              print *, dot_product(a,b)
          end program dp
