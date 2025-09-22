extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch142Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 1;
double var_1_2 = 100.85;
double var_1_3 = 10000000000000.64;
unsigned long int var_1_4 = 1;
signed long int var_1_5 = 1;
signed long int var_1_7 = -1;
signed long int var_1_8 = 500;
signed char var_1_9 = 64;
signed long int var_1_10 = 5;
signed long int var_1_11 = 256;
signed char var_1_12 = 1;
unsigned long int var_1_13 = 1000000;
unsigned long int var_1_14 = 25;
unsigned long int var_1_15 = 10;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 256;
unsigned long int var_1_18 = 1000000000;
unsigned long int var_1_19 = 2;
unsigned long int var_1_20 = 4147625730;
unsigned long int var_1_21 = 1095643256;
float var_1_22 = 10000000.8;
float var_1_23 = 499.5;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
signed short int var_1_26 = 1;
float var_1_28 = 50.2;
float var_1_32 = 64.5;
unsigned char var_1_33 = 32;
unsigned char var_1_34 = 32;
unsigned char var_1_35 = 0;
signed short int var_1_36 = -256;
float var_1_38 = 499.8;
float var_1_39 = 1.05;
float var_1_41 = 256.4;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned short int var_1_46 = 0;
unsigned short int var_1_47 = 43299;
unsigned char var_1_48 = 1;
unsigned char var_1_49 = 4;
unsigned char var_1_50 = 1;
void initially(void) {
}
void step(void) {
                              if ( ((var_1_2) < ( (((((63.875)) > ((var_1_3))) ? ((63.875)) : ((var_1_3))))))) {
                               if ( (! ( ((var_1_3) > (var_1_2))))) {
                                var_1_1 = (
    var_1_4
   );
  } else {
                                var_1_1 = (
    32u
   );
  }
 } else {
                               var_1_1 = (
   var_1_4
  );
 }
                   if ( (( ((((((var_1_23) + (var_1_3))) < 0 ) ? -(((var_1_23) + (var_1_3))) : (((var_1_23) + (var_1_3)))))) >= ( (((((var_1_23)) < ((var_1_3))) ? ((var_1_23)) : ((var_1_3))))))) {
                    if ( ((var_1_35) >= (var_1_16))) {
                     if ( ((var_1_3) < ( (- (var_1_3))))) {
                      var_1_36 = (
                       ((
      var_1_35
     ) + (
      var_1_34
     ))
    );
   } else {
                      var_1_36 = (
                       ((((( var_1_34 )) > (( var_1_8 ))) ? (( var_1_34 )) : (( var_1_8 ))))
    );
   }
  }
 }
 signed long int stepLocal_0 = -128;
                               if ( ((stepLocal_0) <= ( ((var_1_10) - ( ((var_1_11) + (50))))))) {
                                var_1_9 = (
   var_1_12
  );
 }
                   if ( (( ((((var_1_11) < 0 ) ? -(var_1_11) : (var_1_11)))) <= ( ((var_1_35) / (var_1_18))))) {
                    var_1_39 = (
   var_1_32
  );
 } else {
                    if ( ((var_1_38) < (var_1_28))) {
                     var_1_39 = (
    var_1_32
   );
  } else {
                     var_1_39 = (
    var_1_41
   );
  }
 }
                   if ( ((var_1_18) < ( ((var_1_16) & (var_1_34))))) {
                    var_1_42 = (
                     (! (
                      ((
     var_1_43
    ) || (
                       ((
      var_1_44
     ) || (
      var_1_45
     ))
    ))
   ))
  );
 }
                               if ( (( (((((var_1_7)) > ((var_1_8))) ? ((var_1_7)) : ((var_1_8))))) >= ( ((var_1_11) >> (var_1_14))))) {
                                var_1_13 = (
   var_1_4
  );
 }
                   var_1_50 = (
  0
 );
                               var_1_15 = (
                                ((
   10u
  ) + (
                                 ((
    var_1_14
   ) + (
    var_1_16
   ))
  ))
 );
                 var_1_26 = (
  var_1_14
 );
                   if ( (( ((var_1_14) >> (var_1_49))) != (var_1_14))) {
                    var_1_48 = (
                     ((((( var_1_14 )) < (( var_1_49 ))) ? (( var_1_14 )) : (( var_1_49 ))))
  );
 }
                               if ( ((-10) > (var_1_12))) {
                                var_1_17 = (
                                 ((
                                  ((
     var_1_11
    ) + (
                                   ((
      var_1_18
     ) - (
      var_1_14
     ))
    ))
   ) + (
                                   ((
     10000u
    ) + (
     var_1_16
    ))
   ))
  );
 } else {
                                 var_1_17 = (
   var_1_18
  );
 }
                                var_1_22 = (
  var_1_23
 );
                   if ( ((var_1_23) < ( (((((var_1_2)) < ((var_1_23))) ? ((var_1_2)) : ((var_1_23))))))) {
                    var_1_46 = (
                     (((((( var_1_47 ) - ( var_1_16 ))) < 0 ) ? -((( var_1_47 ) - ( var_1_16 ))) : ((( var_1_47 ) - ( var_1_16 )))))
  );
 }
                                var_1_24 = (
  var_1_25
 );
                  var_1_33 = (
                   ((
   var_1_34
  ) + (
   var_1_35
  ))
 );
                               if (var_1_24) {
                               var_1_5 = (
                                ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
  );
 } else {
                                if ( ((var_1_3) != (var_1_2))) {
                                var_1_5 = (
    var_1_8
   );
  } else {
                                 var_1_5 = (
    var_1_7
   );
  }
 }
                  if ( (( ((var_1_14) | (var_1_15))) <= ( ((32u) ^ (var_1_21))))) {
                   var_1_28 = (
   var_1_23
  );
 }
                                if ( (( ((var_1_15) >= ( ((var_1_20) - (8u))))) || ( (! (var_1_24))))) {
                                 var_1_19 = (
                                  ((
    var_1_14
   ) + (
                                   ((
     var_1_21
    ) - (
     var_1_16
    ))
   ))
  );
 } else {
                                 var_1_19 = (
                                  ((((((((( var_1_18 )) > (( 0u ))) ? (( var_1_18 )) : (( 0u ))))) < 0 ) ? -(((((( var_1_18 )) > (( 0u ))) ? (( var_1_18 )) : (( 0u ))))) : (((((( var_1_18 )) > (( 0u ))) ? (( var_1_18 )) : (( 0u )))))))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483647);
 assume_abort_if_not(var_1_7 <= 2147483646);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 2147483647);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1073741824);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 30);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 536870911);
 assume_abort_if_not(var_1_18 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= -922337.2036854766000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 0);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_47 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_47 >= 32767);
 assume_abort_if_not(var_1_47 <= 65534);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 1);
 assume_abort_if_not(var_1_49 <= 7);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_2) < ( (((((63.875)) > ((var_1_3))) ? ((63.875)) : ((var_1_3))))))) {
  if ( (! ( ((var_1_3) > (var_1_2))))) {
  } else {
  }
 } else {
 }
 if (var_1_24) {
 } else {
  if ( ((var_1_3) != (var_1_2))) {
  } else {
  }
 }
 if ( ((-128) <= ( ((var_1_10) - ( ((var_1_11) + (50))))))) {
 }
 if ( (( (((((var_1_7)) > ((var_1_8))) ? ((var_1_7)) : ((var_1_8))))) >= ( ((var_1_11) >> (var_1_14))))) {
 }
 if ( ((-10) > (var_1_12))) {
 } else {
 }
 if ( (( ((var_1_15) >= ( ((var_1_20) - (8u))))) || ( (! (var_1_24))))) {
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                   ((
                                            ((
                                                 ((
          var_1_2
         ) < (
                                                  ((((( 63.875 )) > (( var_1_3 ))) ? (( 63.875 )) : (( var_1_3 ))))
         ))
        ) ? (
                                             ((
                                                   (! (
                                                    ((
            var_1_3
           ) > (
            var_1_2
           ))
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((unsigned long int) (
            var_1_4
           ))
          ))
         ) : (
                                              ((
           var_1_1
          ) == (
                                               ((unsigned long int) (
            32u
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned long int) (
           var_1_4
          ))
         ))
        ))
       ) && (
                                             ((
         var_1_24
        ) ? (
                                             ((
          var_1_5
         ) == (
                                              ((signed long int) (
                                               ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
          ))
         ))
        ) : (
                                              ((
                                                   ((
           var_1_3
          ) != (
           var_1_2
          ))
         ) ? (
                                              ((
           var_1_5
          ) == (
                                               ((signed long int) (
            var_1_8
           ))
          ))
         ) : (
                                               ((
           var_1_5
          ) == (
                                                ((signed long int) (
            var_1_7
           ))
          ))
         ))
        ))
       ))
      ) && (
                                            ((
                                                   ((
         -128
        ) <= (
                                                    ((
          var_1_10
         ) - (
                                                     ((
           var_1_11
          ) + (
           50
          ))
         ))
        ))
       ) ? (
                                             ((
         var_1_9
        ) == (
                                              ((signed char) (
          var_1_12
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
                                                  ((
                                                   ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
       ) >= (
                                                   ((
         var_1_11
        ) >> (
         var_1_14
        ))
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned long int) (
         var_1_4
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned long int) (
                                            ((
        10u
       ) + (
                                             ((
         var_1_14
        ) + (
         var_1_16
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      -10
     ) > (
      var_1_12
     ))
    ) ? (
                                          ((
      var_1_17
     ) == (
                                           ((unsigned long int) (
                                            ((
                                             ((
         var_1_11
        ) + (
                                              ((
          var_1_18
         ) - (
          var_1_14
         ))
        ))
       ) + (
                                             ((
         10000u
        ) + (
         var_1_16
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_17
     ) == (
                                           ((unsigned long int) (
       var_1_18
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      var_1_15
     ) >= (
                                                 ((
       var_1_20
      ) - (
       8u
      ))
     ))
    ) || (
                                                (! (
      var_1_24
     ))
    ))
   ) ? (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned long int) (
                                           ((
       var_1_14
      ) + (
                                            ((
        var_1_21
       ) - (
        var_1_16
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned long int) (
                                           ((((((((( var_1_18 )) > (( 0u ))) ? (( var_1_18 )) : (( 0u ))))) < 0 ) ? -(((((( var_1_18 )) > (( 0u ))) ? (( var_1_18 )) : (( 0u ))))) : (((((( var_1_18 )) > (( 0u ))) ? (( var_1_18 )) : (( 0u )))))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_22
  ) == (
                                        ((float) (
    var_1_23
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((unsigned char) (
   var_1_25
  ))
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
