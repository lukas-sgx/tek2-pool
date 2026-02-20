myAppend :: [a] -> [a] -> [a]
myAppend x [] = x
myAppend [] y = y
myAppend (s:e) y = s : myAppend e y