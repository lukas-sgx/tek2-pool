{-
-- EPITECH PROJECT, 2026
-- day03
-- File description:
-- Reimplementation of basic list and tuple functions
-}

myElem :: Eq a => a -> [a] -> Bool
myElem _ [] = False
myElem a (x:xs)
    | a == x = True
    | otherwise = myElem a xs

safeDiv :: Int -> Int -> Maybe Int
safeDiv _ 0 = Nothing
safeDiv n d = Just (n `div` d)

myLength :: [a] -> Int
myLength [] = 0
myLength (_:x) = 1 + myLength x

safeNth :: [a] -> Int -> Maybe a
safeNth (x:_) 0 = Just x
safeNth (x:xs) i
    | i < 0 = Nothing
    | i > myLength xs = Nothing
    | otherwise = safeNth xs (i - 1)

safeSucc :: Maybe Int -> Maybe Int
safeSucc n = case n of
    Nothing -> Nothing
    Just n -> Just (n + 1)

myLookup :: Eq a => a -> [(a, b)] -> Maybe b
myLookup _ [] = Nothing
myLookup n ((k, v):xs)
    | n == k = Just v
    | otherwise = myLookup n xs

maybeDo :: (a -> b -> c) -> Maybe a -> Maybe b -> Maybe c
maybeDo _ Nothing _ = Nothing
maybeDo _ _ Nothing = Nothing
maybeDo func (Just a) (Just b) = Just (func a b)

isInt :: Char -> Bool
isInt c = c >= '0' && c <= '9'

rInt :: Char -> Int
rInt = read

readInt :: [Char] -> Maybe Int
readInt [] = Nothing
readInt (x:xs)
    | isInt x == False = Nothing
    | isInt x == True = Just rInt(x)

