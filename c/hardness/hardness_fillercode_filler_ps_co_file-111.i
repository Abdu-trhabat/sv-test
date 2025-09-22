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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch111Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
signed long int var_1_3 = 25;
unsigned long int var_1_4 = 1181973178;
unsigned long int var_1_5 = 1000000000;
unsigned long int var_1_6 = 5;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = -32;
signed char var_1_12 = 2;
signed char var_1_13 = 2;
unsigned char var_1_14 = 10;
double var_1_15 = 7.5;
double var_1_16 = 32.8;
signed char var_1_17 = -128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 64;
unsigned char var_1_21 = 32;
float var_1_22 = 10.5;
unsigned char var_1_23 = 8;
signed long int var_1_24 = -256;
unsigned char var_1_25 = 128;
unsigned char var_1_27 = 2;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 8;
unsigned char var_1_30 = 64;
signed long int var_1_31 = 16;
unsigned char var_1_32 = 128;
unsigned char var_1_33 = 64;
unsigned char var_1_34 = 16;
signed short int var_1_35 = 8;
unsigned long int var_1_36 = 10000000;
float var_1_39 = 31.3;
signed short int var_1_41 = -10;
float var_1_42 = 4.8;
float var_1_43 = 7.25;
float var_1_44 = 3.6;
void initially(void) {
}
void step(void) {
                  if (var_1_7) {
                   var_1_25 = (
                    ((((( var_1_27 )) < (( (( var_1_28 ) + ( ((((( var_1_29 )) < (( 64 ))) ? (( var_1_29 )) : (( 64 )))) )) ))) ? (( var_1_27 )) : (( (( var_1_28 ) + ( ((((( var_1_29 )) < (( 64 ))) ? (( var_1_29 )) : (( 64 )))) )) ))))
  );
 }
                  var_1_30 = (
  var_1_29
 );
                  if ( (( ((var_1_27) <= (var_1_1))) || (var_1_7))) {
                   if ( ((var_1_27) <= ( (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) - ( ((var_1_33) + (var_1_34))))))) {
                    var_1_31 = (
                     ((
     100000000
    ) - (
     var_1_28
    ))
   );
  } else {
                    var_1_31 = (
    var_1_29
   );
  }
 } else {
                   var_1_31 = (
   var_1_27
  );
 }
                   if ( (( ((16) / (var_1_32))) <= (200))) {
                    if ( ((var_1_32) > ( (- ( (((((var_1_33)) > ((var_1_1))) ? ((var_1_33)) : ((var_1_1))))))))) {
                     var_1_35 = (
    var_1_21
   );
  }
 }
                   if ( (( ((var_1_15) * ( ((var_1_22) / (var_1_39))))) > (var_1_22))) {
                    var_1_36 = (
                     ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
  );
 }
                   var_1_41 = (
                    ((((( var_1_27 )) < (( var_1_32 ))) ? (( var_1_27 )) : (( var_1_32 ))))
 );
                   if (var_1_7) {
                    var_1_42 = (
                     ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))
  );
 }
                   if ( (( (( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) * (var_1_15))) > ( (((((var_1_15)) > ((var_1_22))) ? ((var_1_15)) : ((var_1_22))))))) {
                    if ( ((var_1_28) < (var_1_1))) {
                     if ( (( ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) < ( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) {
                      if (var_1_7) {
                       var_1_44 = (
      -0.5f
     );
    }
   } else {
                      var_1_44 = (
     var_1_43
    );
   }
  }
 } else {
                    var_1_44 = (
   var_1_43
  );
 }
                                var_1_14 = (
  var_1_10
 );
                                var_1_15 = (
  var_1_16
 );
                                if ( ((var_1_14) != ( ((var_1_18) - ( (((((var_1_19)) > ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))))))) {
                                 if ( ((var_1_20) == (var_1_4))) {
                                  var_1_17 = (
    var_1_12
   );
  }
 }
                                if ( ((var_1_15) == (var_1_16))) {
                                 var_1_21 = (
                                  ((
    var_1_19
   ) + (
    var_1_20
   ))
  );
 }
                                var_1_22 = (
  var_1_16
 );
                                var_1_23 = (
  var_1_19
 );
                                var_1_24 = (
  -8
 );
 signed long int stepLocal_1 = var_1_24;
 signed long int stepLocal_0 = var_1_24;
                              if ( ((-16) < (stepLocal_0))) {
                               if ( ((stepLocal_1) == ( ((100) - (var_1_3))))) {
                                var_1_1 = (
                                 ((
                                  ((
                                   ((((( var_1_4 )) < (( 1415909508u ))) ? (( var_1_4 )) : (( 1415909508u ))))
     ) - (
                                   ((
       var_1_5
      ) - (
       var_1_6
      ))
     ))
    ) + (
     var_1_3
    ))
   );
  }
 } else {
                               var_1_1 = (
                                ((
    2872698422u
   ) - (
    2u
   ))
  );
 }
                              if ( (( (((((var_1_24)) > ((var_1_6))) ? ((var_1_24)) : ((var_1_6))))) == (var_1_5))) {
                               var_1_7 = (
                                (! (
                                 (! (
     1
    ))
   ))
  );
 }
 unsigned char stepLocal_2 = var_1_9;
                              if ( ((var_1_7) && (stepLocal_2))) {
                               var_1_8 = (
   var_1_10
  );
 }
                               if ( (( (( ((var_1_24) * (var_1_1))) + (var_1_4))) < ( ((var_1_6) + ( (((((var_1_5)) < ((var_1_10))) ? ((var_1_5)) : ((var_1_10))))))))) {
                                 var_1_11 = (
   var_1_12
  );
 } else {
                                 var_1_11 = (
   32
  );
 }
 unsigned char stepLocal_3 = var_1_7;
                                if ( (( ((-128) >= ( (((((var_1_10)) < ((var_1_8))) ? ((var_1_10)) : ((var_1_8))))))) && (stepLocal_3))) {
                                 var_1_13 = (
   var_1_12
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 536870911);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 536870911);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 255);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 127);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 127);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 127);
 assume_abort_if_not(var_1_32 <= 255);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 64);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 63);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 assume_abort_if_not(var_1_39 != 0.0F);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((-16) < (var_1_24))) {
  if ( ((var_1_24) == ( ((100) - (var_1_3))))) {
  }
 } else {
 }
 if ( (( (((((var_1_24)) > ((var_1_6))) ? ((var_1_24)) : ((var_1_6))))) == (var_1_5))) {
 }
 if ( ((var_1_7) && (var_1_9))) {
 }
 if ( (( (( ((var_1_24) * (var_1_1))) + (var_1_4))) < ( ((var_1_6) + ( (((((var_1_5)) < ((var_1_10))) ? ((var_1_5)) : ((var_1_10))))))))) {
 } else {
 }
 if ( (( ((-128) >= ( (((((var_1_10)) < ((var_1_8))) ? ((var_1_10)) : ((var_1_8))))))) && (var_1_7))) {
 }
 if ( ((var_1_14) != ( ((var_1_18) - ( (((((var_1_19)) > ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))))))) {
  if ( ((var_1_20) == (var_1_4))) {
  }
 }
 if ( ((var_1_15) == (var_1_16))) {
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
                      ((
                                               ((
                                                   ((
             -16
            ) < (
             var_1_24
            ))
           ) ? (
                                                ((
                                                      ((
              var_1_24
             ) == (
                                                       ((
               100
              ) - (
               var_1_3
              ))
             ))
            ) ? (
                                                 ((
              var_1_1
             ) == (
                                                  ((unsigned long int) (
                                                   ((
                                                    ((
                                                     ((((( var_1_4 )) < (( 1415909508u ))) ? (( var_1_4 )) : (( 1415909508u ))))
                ) - (
                                                     ((
                  var_1_5
                 ) - (
                  var_1_6
                 ))
                ))
               ) + (
                var_1_3
               ))
              ))
             ))
            ) : (
             1
            ))
           ) : (
                                                ((
             var_1_1
            ) == (
                                                 ((unsigned long int) (
                                                  ((
               2872698422u
              ) - (
               2u
              ))
             ))
            ))
           ))
          ) && (
                                               ((
                                                     ((
                                                      ((((( var_1_24 )) > (( var_1_6 ))) ? (( var_1_24 )) : (( var_1_6 ))))
            ) == (
             var_1_5
            ))
           ) ? (
                                                ((
             var_1_7
            ) == (
                                                 ((unsigned char) (
                                                  (! (
                                                   (! (
                1
               ))
              ))
             ))
            ))
           ) : (
            1
           ))
          ))
         ) && (
                                              ((
                                                    ((
            var_1_7
           ) && (
            var_1_9
           ))
          ) ? (
                                               ((
            var_1_8
           ) == (
                                                ((unsigned char) (
             var_1_10
            ))
           ))
          ) : (
           1
          ))
         ))
        ) && (
                                              ((
                                                     ((
                                                      ((
                                                       ((
             var_1_24
            ) * (
             var_1_1
            ))
           ) + (
            var_1_4
           ))
          ) < (
                                                      ((
            var_1_6
           ) + (
                                                       ((((( var_1_5 )) < (( var_1_10 ))) ? (( var_1_5 )) : (( var_1_10 ))))
           ))
          ))
         ) ? (
                                               ((
           var_1_11
          ) == (
                                                ((signed char) (
            var_1_12
           ))
          ))
         ) : (
                                               ((
           var_1_11
          ) == (
                                                ((signed char) (
            32
           ))
          ))
         ))
        ))
       ) && (
                                             ((
                                                    ((
                                                     ((
           -128
          ) >= (
                                                      ((((( var_1_10 )) < (( var_1_8 ))) ? (( var_1_10 )) : (( var_1_8 ))))
          ))
         ) && (
          var_1_7
         ))
        ) ? (
                                              ((
          var_1_13
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
        var_1_14
       ) == (
                                             ((unsigned char) (
         var_1_10
        ))
       ))
      ))
     ) && (
                                           ((
       var_1_15
      ) == (
                                            ((double) (
        var_1_16
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_14
      ) != (
                                                  ((
        var_1_18
       ) - (
                                                   ((((( var_1_19 )) > (( var_1_20 ))) ? (( var_1_19 )) : (( var_1_20 ))))
       ))
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_20
       ) == (
        var_1_4
       ))
      ) ? (
                                            ((
        var_1_17
       ) == (
                                             ((signed char) (
         var_1_12
        ))
       ))
      ) : (
       1
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_15
     ) == (
      var_1_16
     ))
    ) ? (
                                          ((
      var_1_21
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_19
       ) + (
        var_1_20
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_22
   ) == (
                                         ((float) (
     var_1_16
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned char) (
    var_1_19
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((signed long int) (
   -8
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
