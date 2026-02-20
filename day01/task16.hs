myDrop :: Int -> [a] -> [a]
myDrop i [_] | i < 0 = []
myDrop i (s:e) | i == 0 = e
myDrop i (s:e) = s : myDrop (i - 1) e