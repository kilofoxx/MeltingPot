{\rtf1\ansi\ansicpg1252\cocoartf1187\cocoasubrtf370
{\fonttbl\f0\fmodern\fcharset0 Courier-Bold;\f1\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red38\green38\blue38;\red14\green110\blue109;\red17\green137\blue135;
\red210\green0\blue53;\red133\green0\blue4;\red14\green114\blue164;}
\margl1440\margr1440\vieww10800\viewh18640\viewkind0
\deftab720
\pard\pardeftab720

\f0\b\fs24 \cf2 <?
\f1\b0 php\
\pard\pardeftab720
\cf3 $inputs\cf2  
\f0\b =
\f1\b0  
\f0\b array
\f1\b0 (\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b +
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 1\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b +
\f1\b0 \cf4 1\cf2 , 
\f0\b -
\f1\b0 \cf4 1\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b +
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 0\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b +
\f1\b0 \cf4 0\cf2 , 
\f0\b +
\f1\b0 \cf4 1\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b +
\f1\b0 \cf4 0\cf2 , 
\f0\b -
\f1\b0 \cf4 1\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b +
\f1\b0 \cf4 0\cf2 , 
\f0\b +
\f1\b0 \cf4 0\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b -
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 1\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b -
\f1\b0 \cf4 1\cf2 , 
\f0\b -
\f1\b0 \cf4 1\cf2  ),\
\'a0\'a0\'a0\'a0
\f0\b array
\f1\b0 ( 
\f0\b -
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 0\cf2  ),\
);\
\
\pard\pardeftab720
\cf5 /**\cf2 \
\cf5  * op | one | two | value\cf2 \
\cf5  * ===+=====+=====+======\cf2 \
\cf5  * +  | +1  | +1  | +2\cf2 \
\cf5  * +  | +1  | -1  | +0\cf2 \
\cf5  * +  | +1  | +0  | +1\cf2 \
\cf5  * +  | +0  | +1  | +1\cf2 \
\cf5  * +  | +0  | -1  | -1\cf2 \
\cf5  * +  | +0  | +0  | +0\cf2 \
\cf5  * +  | -1  | +1  | +0\cf2 \
\cf5  * +  | -1  | -1  | -2\cf2 \
\cf5  * +  | -1  | +0  | -1\cf2 \
\cf5  */\cf2 \
\pard\pardeftab720

\f0\b \cf2 function
\f1\b0  
\f0\b \cf6 add
\f1\b0 \cf2 (\cf3 $value1\cf2 , \cf3 $value2\cf2 )\
\{\
\'a0\'a0\'a0\'a0
\f0\b return
\f1\b0  \cf3 $value1\cf2  
\f0\b +
\f1\b0  \cf3 $value2\cf2 ;\
\}\
\{\
\'a0\'a0\'a0\'a0\cf3 $outputs\cf2  
\f0\b =
\f1\b0  
\f0\b array
\f1\b0 (\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b +
\f1\b0 \cf4 2\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b +
\f1\b0 \cf4 0\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b +
\f1\b0 \cf4 1\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b +
\f1\b0 \cf4 1\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b -
\f1\b0 \cf4 1\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b +
\f1\b0 \cf4 0\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b +
\f1\b0 \cf4 0\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b -
\f1\b0 \cf4 2\cf2 ,\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0
\f0\b -
\f1\b0 \cf4 1\cf2 ,\
\'a0\'a0\'a0\'a0);\
\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0
\f0\b for
\f1\b0  (\cf3 $i\cf2  
\f0\b =
\f1\b0  \cf4 0\cf2 ; \cf3 $i\cf2  
\f0\b <
\f1\b0  \cf4 9\cf2 ; \cf3 $i
\f0\b \cf2 ++
\f1\b0 )\
\'a0\'a0\'a0\'a0\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf7 assert\cf2 (add(\cf3 $inputs\cf2 [\cf3 $i\cf2 ][\cf4 0\cf2 ], \cf3 $inputs\cf2 [\cf3 $i\cf2 ][\cf4 1\cf2 ]) 
\f0\b ==
\f1\b0  \cf3 $outputs\cf2 [\cf3 $i\cf2 ]);\
\'a0\'a0\'a0\'a0\}\
\
\
\'a0\'a0\'a0\'a0\cf3 $i\cf2  
\f0\b =
\f1\b0  \cf4 0\cf2 ;\
\'a0\'a0\'a0\'a0
\f0\b while
\f1\b0  ( \cf3 $i\cf2  
\f0\b <
\f1\b0  \cf4 9\cf2  )\
\'a0\'a0\'a0\'a0\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf7 assert\cf2 (add(\cf3 $inputs\cf2 [\cf3 $i\cf2 ][\cf4 0\cf2 ], \cf3 $inputs\cf2 [\cf3 $i\cf2 ][\cf4 1\cf2 ]) 
\f0\b ==
\f1\b0  \cf3 $outputs\cf2 [\cf3 $i\cf2 ]);\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf3 $i
\f0\b \cf2 ++
\f1\b0 ;\
\'a0\'a0\'a0\'a0\}\
\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0
\f0\b while
\f1\b0  ( \cf3 $input\cf2  
\f0\b =
\f1\b0  \cf7 current\cf2 (\cf3 $inputs\cf2 ) 
\f0\b and
\f1\b0  \cf3 $output\cf2  
\f0\b =
\f1\b0  \cf7 current\cf2 (\cf3 $outputs\cf2 ) )\
\'a0\'a0\'a0\'a0\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf7 assert\cf2 (add(\cf3 $input\cf2 [\cf4 0\cf2 ], \cf3 $input\cf2 [\cf4 1\cf2 ]) 
\f0\b ==
\f1\b0  \cf3 $output\cf2 );\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf7 next\cf2 (\cf3 $inputs\cf2 ); \cf7 next\cf2 (\cf3 $outputs\cf2 );\
\'a0\'a0\'a0\'a0\}\
\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0
\f0\b foreach
\f1\b0  ( \cf3 $inputs\cf2  
\f0\b as
\f1\b0  \cf3 $index\cf2  
\f0\b =>
\f1\b0  \cf3 $input\cf2  )\
\'a0\'a0\'a0\'a0\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf7 assert\cf2 (add(\cf3 $input\cf2 [\cf4 0\cf2 ], \cf3 $input\cf2 [\cf4 1\cf2 ]) 
\f0\b ==
\f1\b0  
\f0\b @
\f1\b0 \cf3 $outputs\cf2 [\cf3 $index\cf2 ]);\
\'a0\'a0\'a0\'a0\}\
\}\
\
\pard\pardeftab720
\cf5 /**\cf2 \
\cf5  * op | one | two | value\cf2 \
\cf5  * ===+=====+=====+======\cf2 \
\cf5  * -  | +1  | +1  | +0\cf2 \
\cf5  * -  | +1  | -1  | +2\cf2 \
\cf5  * -  | +1  | +0  | +1\cf2 \
\cf5  * -  | +0  | +1  | -1\cf2 \
\cf5  * -  | +0  | -1  | +1\cf2 \
\cf5  * -  | +0  | +0  | +0\cf2 \
\cf5  * -  | -1  | +1  | -2\cf2 \
\cf5  * -  | -1  | -1  |  0\cf2 \
\cf5  * -  | -1  | +0  | -1\cf2 \
\cf5  */\cf2 \
\pard\pardeftab720

\f0\b \cf2 function
\f1\b0  
\f0\b \cf6 minus
\f1\b0 \cf2  ( \cf3 $a\cf2 , \cf3 $b\cf2  )\
\{\
\'a0\'a0\'a0\'a0
\f0\b return
\f1\b0  \cf3 $a\cf2  
\f0\b -
\f1\b0  \cf3 $b\cf2 ;\
\}\
\{\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b +
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b +
\f1\b0 \cf4 1\cf2 , 
\f0\b -
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 2\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b +
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 0\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b +
\f1\b0 \cf4 0\cf2 , 
\f0\b +
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b -
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b +
\f1\b0 \cf4 0\cf2 , 
\f0\b -
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b +
\f1\b0 \cf4 0\cf2 , 
\f0\b +
\f1\b0 \cf4 0\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b -
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b -
\f1\b0 \cf4 2\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b -
\f1\b0 \cf4 1\cf2 , 
\f0\b -
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (minus(
\f0\b -
\f1\b0 \cf4 1\cf2 , 
\f0\b +
\f1\b0 \cf4 0\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b -
\f1\b0 \cf4 1\cf2 );\
\}\
\
\pard\pardeftab720
\cf5 /**\cf2 \
\cf5  * op | one | two | value\cf2 \
\cf5  * ===+=====+=====+======\cf2 \
\cf5  * x  | +1  | +1  | +1\cf2 \
\cf5  * x  | +1  | -1  | -1\cf2 \
\cf5  * x  | +1  | +0  | +0\cf2 \
\cf5  * x  | +0  | +1  | +0\cf2 \
\cf5  * x  | +0  | -1  | +0\cf2 \
\cf5  * x  | +0  | +0  | +0\cf2 \
\cf5  * x  | -1  | +1  | -1\cf2 \
\cf5  * x  | -1  | -1  | +1\cf2 \
\cf5  * x  | -1  | +0  | +0\cf2 \
\cf5  */\cf2 \
\pard\pardeftab720

\f0\b \cf2 function
\f1\b0  
\f0\b \cf6 multiply
\f1\b0 \cf2 ( \cf3 $a\cf2 , \cf3 $b\cf2 )\
\{\
\'a0\'a0\'a0\'a0
\f0\b return
\f1\b0  \cf3 $a\cf2  
\f0\b *
\f1\b0  \cf3 $b\cf2 ;\
\}\
\{\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b +
\f1\b0 \cf4 1\cf2 ,
\f0\b +
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b +
\f1\b0 \cf4 1\cf2 ,
\f0\b -
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b -
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b +
\f1\b0 \cf4 1\cf2 ,
\f0\b +
\f1\b0 \cf4 0\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b +
\f1\b0 \cf4 0\cf2 ,
\f0\b +
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b +
\f1\b0 \cf4 0\cf2 ,
\f0\b -
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b +
\f1\b0 \cf4 0\cf2 ,
\f0\b +
\f1\b0 \cf4 0\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b -
\f1\b0 \cf4 1\cf2 ,
\f0\b +
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b -
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b -
\f1\b0 \cf4 1\cf2 ,
\f0\b -
\f1\b0 \cf4 1\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 1\cf2 );\
\'a0\'a0\'a0\'a0\cf7 assert\cf2 (multiply(
\f0\b -
\f1\b0 \cf4 1\cf2 ,
\f0\b +
\f1\b0 \cf4 0\cf2 ) 
\f0\b ==
\f1\b0  
\f0\b +
\f1\b0 \cf4 0\cf2 );\
\}}