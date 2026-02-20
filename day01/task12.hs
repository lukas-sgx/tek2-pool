myTail :: [a] -> [a]
myTail (_:x) = x
myTail [] = error "Empty list" 