myReverse :: [a] -> [a]
myReverse x = aux x []
    where
        aux [] acc = acc
        aux (s:e) acc = aux e (s:acc)