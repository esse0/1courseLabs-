   a       =       -   4   ;       b       =       -   3   ;      
      
   f   1       =       @   (   x   )   (   (   x   .   *       0   .   5   .   ^   x   .   ^   2   )   )   ;      
   f   2       =       @   (   x   )   (   (   (   s   i   n   (   7   .   *   x       +       1   )   )   .   /       (   7   .   *   x       +       1   )   )   )   ;      
      
      
   s   1   =       i   n   t   e   g   r   a   l   (   f   1   ,       a   ,       b   )   ;      
   s   2   =       i   n   t   e   g   r   a   l   (   f   2   ,       a   ,       b   )   ;      
   n   =   1   0   ;      
   n   1   =   1   0   0   ;      
      
   s       =       [   t   r   a   p   (   f   1   ,       a   ,       b   ,       n   )           t   r   a   p   (   f   1   ,       a   ,       b   ,       n   1   )      
                   r   e   c   t   s   (   f   1   ,       a   ,       b   ,       n   )           r   e   c   t   s   (   f   1   ,       a   ,       b   ,       n   1   )      
                   s   i   m   p   s   o   n   (   f   1   ,       a   ,       b   ,       n   )           s   i   m   p   s   o   n   (   f   1   ,       a   ,       b   ,       n   1   )   ]   ;      
      
   d   e   l   t   a   _   a   b   s       =       [   a   b   s   (   s   (   1   ,       1   )       -       s   1   )       a   b   s   (   s   (   1   ,       2   )       -       s   1   )      
                                                   a   b   s   (   s   (   2   ,       1   )       -       s   1   )       a   b   s   (   s   (   2   ,       2   )       -       s   1   )      
                                                   a   b   s   (   s   (   3   ,       1   )       -       s   1   )       a   b   s   (   s   (   3   ,       2   )       -       s   1   )   ]   ;      
      
   d   e   l   t   a   _   r   e   l       =       [   (   d   e   l   t   a   _   a   b   s   (   1   ,       1   )       /       s   1   )       (   d   e   l   t   a   _   a   b   s   (   1   ,       2   )       /       s   1   )      
                                                   (   d   e   l   t   a   _   a   b   s   (   2   ,       1   )       /       s   1   )       (   d   e   l   t   a   _   a   b   s   (   2   ,       2   )       /       s   1   )      
                                                   (   d   e   l   t   a   _   a   b   s   (   3   ,       1   )       /       s   1   )       (   d   e   l   t   a   _   a   b   s   (   3   ,       2   )       /       s   1   )   ]   ;      
   %    5  B  >  4      B  @  0  ?  5  F  8  8      
   f   u   n   c   t   i   o   n       s   u   m       =       t   r   a   p   (   f   ,       a   ,       b   ,       n   )      
   s   u   m   =   0   ;      
   h   =   (   b   -   a   )   /   n   ;      
      
      
                   f   o   r       i   =   a   :   h   :   b      
                                   i   f       i   ~   =   b      
                                   s   u   m       =       s   u   m       +       0   .   5       *       h       *       (   f   (   i   )       +       f   (   i       +       h   )   )   ;      
                                   e   n   d      
                   e   n   d      
   e   n   d      
      
   %    5  B  >  4      A  @  5  4  =  8  E      ?  @  O  <  >  C  3  >  ;  L  =  8  :  >  2      
   f   u   n   c   t   i   o   n       s   u   m       =       r   e   c   t   s       (   f   ,       a   ,       b   ,       n   )      
                   s   u   m       =       0   ;      
                   h       =       (   b       -       a   )       /       n   ;      
                      
                   f   o   r       i       =       a       :       h       :       b      
                                   i   f       i       ~   =       b          
                                                   s   u   m       =       s   u   m       +       (   f   (   i       +       h       *       0   .   5   )   )       *       h   ;      
                                   e   n   d      
                   e   n   d      
   e   n   d      
      
   %    5  B  >  4      !  8  <  ?  A  >  =  0      
   f   u   n   c   t   i   o   n       s   u   m       =       s   i   m   p   s   o   n       (   f   ,       a   ,       b   ,       n   )      
                   s   u   m       =       0   ;      
                   h       =       (   b       -       a   )       /       n   ;      
                      
                   f   o   r       i       =       0       :       n      
                                   i   f       i       ~   =       n          
                                                   x   1       =       a       +       i   .   *       h   ;      
                                                   x   2       =       a       +       (   i       +       1   )   .   *       h   ;      
      
                                                   s   u   m       =       s   u   m       +       (   (   x   2   -   x   1   )   /   6   .   0   *   (   f   (   x   1   )       +       4   .   0   *   f   (   0   .   5   *   (   x   1   +   x   2   )   )       +       f   (   x   2   )   )   )   ;      
                                   e   n   d      
                   e   n   d      
   e   n   d