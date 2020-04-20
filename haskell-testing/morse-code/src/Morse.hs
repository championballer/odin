module Morse
       ( Morse
       , charToMorse
       , morseToChar
       , stringToMorse
       , letterToMorse
       ) where

import qualified Data.Map as M

type Morse = String

-- dictionary for char -> morse
letterToMorse :: M.Map Char Morse
letterToMorse = M.fromList [
      ('a', ".-")
    , ('b', "-...")
    , ('c', "-.-.")
    , ('d', "-..")
    , ('e', ".")
    , ('f', "..-.")
    , ('g', "--.")
    , ('h', "....")
    , ('i', "..")
    , ('j', ".---")
    , ('k', "-.-")
    , ('l', ".-..")
    , ('m', "--")
    , ('n', "-.")
    , ('o', "---")
    , ('p', ".--.")
    , ('q', "--.-")
    , ('r', ".-.")
    , ('s', "...")
    , ('t', "-")
    , ('u', "..-")
    , ('v', "...-")
    , ('w', ".--")
    , ('x', "-..-")
    , ('y', "-.--")
    , ('z', "--..")
    , ('1', ".----")
    , ('2', "..---")
    , ('3', "...--")
    , ('4', "....-")
    , ('5', ".....")
    , ('6', "-....")
    , ('7', "--...")
    , ('8', "---..")
    , ('9', "----.")
    , ('0', "----")
    ]

-- dictionary for morse -> char
morseToLetter :: M.Map Morse Char
morseToLetter = M.foldrWithKey (flip M.insert) M.empty letterToMorse

-- Char to Morse using the lookup table, handles the wrong key case with Maybe
charToMorse :: Char -> Maybe Morse
charToMorse c = M.lookup c letterToMorse

-- String to Morse using charToMorse function
stringToMorse :: String -> Maybe [Morse]
stringToMorse s = sequence $ fmap charToMorse s

-- Morse to Char using the morseToLetter lookup table
morseToChar :: Morse -> Maybe Char
morseToChar m = M.lookup m morseToLetter
