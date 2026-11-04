{-
-- EPITECH PROJECT, 2026
-- day02
-- File description:
-- Reimplementation of basic list and tuple functions
-}

mySucc :: Int -> Int
mySucc x = x + 1

myIsNeg :: Int -> Bool
myIsNeg x
    | x < 0 = True
    | otherwise = False

myAbs :: Int -> Int
myAbs x
    | x < 0 = -x
    | otherwise = x

myMin :: Int -> Int -> Int
myMin x y
    | x <= y = x
    | otherwise = y

myMax :: Int -> Int -> Int
myMax x y
    | x >= y = x
    | otherwise  = y

myTuple :: a -> b -> (a, b)
myTuple a b = (a, b)

myTruple :: a -> b -> c -> (a, b, c)
myTruple a b c = (a, b, c)

myFst :: (a, b) -> a
myFst (a, b) = a

mySnd :: (a, b) -> b
mySnd (a, b) = b

mySwap :: (a, b) -> (b, a)
mySwap (a , b) = (b, a)

myHead :: [a] -> a
myHead (x:_) = x
myHead [] = error "Empty list"

myTail :: [a] -> [a]
myTail (_:x) = x
myTail [] = error "Empty list"

myLength :: [a] -> Int
myLength [] = 0
myLength (_:x) = 1 + myLength x

myNth :: [a] -> Int -> a
myNth [] _ = error "Empty list"
myNth (a:as) 0 = a
myNth (a:as) x
    | x < 0 = error "Out of bounds"
    | x > myLength as = error "Out of bounds"
    | otherwise = myNth as (x - 1)


myTake :: Int -> [a] -> [a]
myTake _ [] = []
myTake x _
    | x <= 0 = []
myTake x (s:e) = s : myTake (x-1) e

myDrop :: Int -> [a] -> [a]
myDrop _ [] = []
myDrop x a  | x <= 0 = a
myDrop x (_:e) = myDrop (x - 1) e

myAppend :: [a] -> [a] -> [a]
myAppend a [] = a
myAppend [] b = b
myAppend (s:e) b = s:myAppend e b

myReverse :: [a] -> [a]
myReverse a = b a []
    where
        b [] acc = acc
        b (s:e) acc = b e (s:acc) 

myInit :: [a] -> [a]
myInit [] = error "Empty list"
myInit a
    | myLength a == 1 = []
myInit (s:e) = s:myInit e

myLast :: [a] -> a
myLast [] = error "Empty list"
myLast [a] = a
myLast (s:e) = myLast e

myZip :: [a] -> [b] -> [(a, b)]
myZip [] _  = []
myZip _ []  = []
myZip (s:e) (sx:ex) = (s,sx) : myZip e ex

myUnzip :: [(a, b)] -> ([a], [b])
myUnzip [] = ([], [])
myUnzip ((s,e):ex) = (s:sx, e:yx)
    where
        (sx, yx) = myUnzip ex

myMap :: (a -> b) -> [a] -> [b]
myMap _ [] = []
myMap f (s:e) = f s:myMap f e

myFilter :: (a -> Bool) -> [a] -> [a]
myFilter _ [] = []
myFilter f a = filt f a []
    where
        filt _ [] acc = myReverse acc
        filt f (s:e) acc
            | f s = filt f e (s:acc)
            | otherwise = filt f e acc