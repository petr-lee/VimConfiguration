Vim�UnDo� �vI\O�����:�G�:������!}�]<:   %       $          S       S   S   S    YI�i    _�                             ����                                                                                                                                                                                                                                                                                                                                                             YI�x     �   	                �   	      
    �   	                  �   	            �                   5�_�                       (    ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   
            ,    for (int i = 0; i < n; i++) cin >> c[i];5�_�                       '    ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   
            ,    for (int i = 0; i < n; i++) cin >> a[i];    �                   �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YI��     �      
          �      	       5�_�                    	   	    ����                                                                                                                                                                                                                                                                                                                                                             YI��     �      
         int parent[N];    �   	             �   	          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YI��     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YI��     �                   �             5�_�      	                 	    ����                                                                                                                                                                                                                                                                                                                                                             YI��     �               
    for ()5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             YI��     �                   for (int i = 0; i < n; i++)5�_�   	              
   	       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	             �   	          5�_�   
                 	   
    ����                                                                                                                                                                                                                                                                                                                                                             YI��     �      
         int parent[N];5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int 5�_�                    
   	    ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            
int find()5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int n)5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int n) {}5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int n) {  }5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int n) { return  }5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int a) { return  }5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int a) { return a  }5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int a) { return a }5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int n) { return a }5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             YI��     �   	            int find(int a) { return a }5�_�                    
   ?    ����                                                                                                                                                                                                                                                                                                                                                             YI�	     �   	            Bint find(int a) { return a == parent[a] ? a : parent[a] = find() }5�_�                    
   I    ����                                                                                                                                                                                                                                                                                                                                                             YI�     �   	            Kint find(int a) { return a == parent[a] ? a : parent[a] = find(parent[a]) }5�_�                    
   I    ����                                                                                                                                                                                                                                                                                                                                                             YI�     �   
             �   
          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YI�     �   
            bool check()5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YI�     �             �                   �             �   
            bool check(int a, int b)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YI�     �                5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YI�     �                   return find()5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             YI�     �                   return find(a)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             YI�"     �                   return find(a) == find();5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             YI�&     �   
            bool check(int a, int b) {       return find(a) == find(b);�   
            bool check(int a, int b) {5�_�       "           !      5    ����                                                                                                                                                                                                                                                                                                                                                             YI�(     �   
            5bool check(int a, int b) { return find(a) == find(b);   }�   
            5bool check(int a, int b) { return find(a) == find(b);5�_�   !   #           "      5    ����                                                                                                                                                                                                                                                                                                                                                             YI�*     �   
            5bool check(int a, int b) { return find(a) == find(b);5�_�   "   $           #           ����                                                                                                                                                                                                                                                                                                                                                             YI�V     �      
          �      
       5�_�   #   %           $   	       ����                                                                                                                                                                                                                                                                                                                                                             YI�Y     �      
         int rank[N]5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                                                             YI�Z     �                �             5�_�   %   (           &          ����                                                                                                                                                                                                                                                                                                                                                             YI�]     �             �                   �             �               void init();5�_�   &   )   '       (           ����                                                                                                                                                                                                                                                                                                                                                V       YI�`     �                .    for (int i = 0; i < n; i++) parent[i] = i;5�_�   (   *           )           ����                                                                                                                                                                                                                                                                                                                                                V       YI�a     �             �             5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                V       YI�a     �                 5�_�   *   ,           +           ����                                                                                                                                                                                                                                                                                                                                                V       YI�c     �                5�_�   +   -           ,      
    ����                                                                                                                                                                                                                                                                                                                                                V       YI�n     �                   �             5�_�   ,   .           -          ����                                                                                                                                                                                                                                                                                                                                                V       YI�p     �                   memset();5�_�   -   /           .          ����                                                                                                                                                                                                                                                                                                                                                V       YI�t     �                   memset(rank, 0, sizeof());5�_�   .   0           /          ����                                                                                                                                                                                                                                                                                                                                                V       YI�v     �               "    memset(rank, 0, sizeof(rank));5�_�   /   1           0           ����                                                                                                                                                                                                                                                                                                                                                V       YI�w     �               "    memset(rank, 0, sizeof rank));5�_�   0   2           1          ����                                                                                                                                                                                                                                                                                                                                                V       YI�y     �               "    memset(rank, 0, sizeof rank );5�_�   1   3           2          ����                                                                                                                                                                                                                                                                                                                                                V       YI�{     �               !    memset(rank, 0, sizeof rank);5�_�   2   4           3           ����                                                                                                                                                                                                                                                                                                                                                V       YI�}     �               !    memset(rank, 0, sizeof(rank);5�_�   3   5           4           ����                                                                                                                                                                                                                                                                                                                                                  V        YI��     �                "    memset(rank, 0, sizeof(rank));5�_�   4   6           5           ����                                                                                                                                                                                                                                                                                                                                                  V        YI��     �             �             5�_�   5   7           6           ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �             �             5�_�   6   8           7          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �               "    memset(rank, 0, sizeof(rank));5�_�   7   9           8          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                   memset(, 0, sizeof(rank));5�_�   8   :           9          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �               $    memset(parent, 0, sizeof(rank));5�_�   9   ;           :          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                    memset(parent, 0, sizeof());5�_�   :   <           ;      "    ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                �             5�_�   ;   =           <      
    ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �               int union()5�_�   <   >           =          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                   �             �                   �             �               int union(int a, int b)5�_�   =   ?           >          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �               	    if ()5�_�   >   @           ?          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                   if (!check())5�_�   ?   A           @          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                       �             �                       �             �                   if (!check(a, b))5�_�   @   B           A          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                       int pa = find()5�_�   A   C           B          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                       int pa = find(a)5�_�   B   D           C      $    ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �               &        int pa = find(a), pb = find();5�_�   C   E           D      &    ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                       �             5�_�   D   F           E          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                       if ()5�_�   E   G           F           ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �             �                           �             �                        if (rank[pa] > rank[pb])5�_�   F   H           G           ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                 5�_�   G   I           H           ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                int union(int a, int b) {5�_�   H   J           I           ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                union(int a, int b) {5�_�   I   K           J          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �                            5�_�   J   L           K      	    ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �         "                  �         !    �         !                  �              �                	        }5�_�   K   M           L      #    ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �         #                  �         "    5�_�   L   N           M          ����                                                                                                                                                                                                                                                                                                                                                V       YI��     �         #                  if ()5�_�   M   O           N      %    ����                                                                                                                                                                                                                                                                                                                                                V       YI�    �         #      %            if (rank[pa] == rank[pb])5�_�   N   P           O      -    ����                                                                                                                                                                                                                                                                                                                                                V       YI�    �         #      1            if (rank[pa] == rank[pb]) rank[pb]++;5�_�   O   Q           P      
    ����                                                                                                                                                                                                                                                                                                                                                V       YI�    �         #      void union(int a, int b) {5�_�   P   R           Q      ,    ����                                                                                                                                                                                                                                                                                                                                                V       YI��    �         #      1            if (rank[pa] == rank[pb]) rank[pa]++;5�_�   Q   S           R   "   +    ����                                                                                                                                                                                                                                                                                                                                                V       YI��    �   "   %   $          �   "   $   #    5�_�   R               S   $        ����                                                                                                                                                                                                                                                                                                                                                V       YI�h    �   #   %   %       5�_�   &           (   '          ����                                                                                                                                                                                                                                                                                                                                                             YI�_     �              5��