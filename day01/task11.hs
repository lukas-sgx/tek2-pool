myHead :: [a] -> a
myHead (x:_) = x
myHead [] = error "Empty list"