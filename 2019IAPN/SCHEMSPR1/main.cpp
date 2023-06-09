         load  =0
         store 1
         read  2
         read  3
petla:   load  2
         sub   =1
         jzero koniec
         load  2
         div   3
         mult  3
         sub   2
         jzero bdzieli
         load  2
         div   =2
         mult  =2
         sub   2
         jzero dzieli2
         load  2
         add   =1
         store 2
podziel: load  1
         add   2
         store 1
         jump  petla
bdzieli: load  2
         div   3
         store 2
         jump  podziel
dzieli2: load  2
         div   =2
         store 2
         jump  podziel
koniec:  write 1