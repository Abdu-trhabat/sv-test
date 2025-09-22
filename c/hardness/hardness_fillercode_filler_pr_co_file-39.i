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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch39Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -1;
signed long int var_1_5 = 50;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 8;
signed short int var_1_8 = 4;
unsigned long int var_1_9 = 256;
unsigned long int var_1_10 = 10;
unsigned long int var_1_11 = 3084274888;
unsigned long int var_1_12 = 50;
signed long int var_1_13 = -10;
signed long int var_1_14 = 2040141804;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
signed short int var_1_17 = 10;
unsigned char var_1_18 = 8;
unsigned char var_1_19 = 25;
unsigned short int var_1_20 = 2;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -10;
unsigned char var_1_23 = 1;
float var_1_24 = 999999999999.475;
signed long int var_1_25 = -64;
double var_1_26 = 5.25;
double var_1_27 = 31.5;
signed char var_1_28 = 5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
signed char var_1_32 = 5;
signed char var_1_33 = 10;
signed char var_1_34 = 0;
signed long int var_1_35 = 50;
signed long int var_1_36 = -25;
signed long int var_1_37 = 8;
unsigned long int var_1_38 = 256;
unsigned long int var_1_39 = 1;
float var_1_40 = 9.625;
float var_1_41 = 63.5;
float var_1_42 = 2.5;
signed long int var_1_44 = 256;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
unsigned long int last_1_var_1_10 = 10;
unsigned long int last_1_var_1_12 = 50;
signed short int last_1_var_1_17 = 10;
void initially(void) {
}
void step(void) {
 unsigned long int stepLocal_0 = (( ((last_1_var_1_17) + (last_1_var_1_10))) ^ (last_1_var_1_12));
                                         if ( ((stepLocal_0) < ( ((var_1_5) | (-4))))) {
                                          var_1_1 = (
                                           ((
    var_1_7
   ) - (
    var_1_8
   ))
  );
 } else {
                                          var_1_1 = (
                                           ((
    last_1_var_1_12
   ) + (
    -16
   ))
  );
 }
                   if ( ((var_1_23) && ( (( ((var_1_29) && (var_1_30))) || (var_1_31))))) {
                    var_1_28 = (
                     ((
    var_1_32
   ) - (
                      ((((( var_1_33 )) > (( var_1_34 ))) ? (( var_1_33 )) : (( var_1_34 ))))
   ))
  );
 }
                               var_1_10 = (
                                ((((( (((((( var_1_11 ) - ( var_1_8 ))) < 0 ) ? -((( var_1_11 ) - ( var_1_8 ))) : ((( var_1_11 ) - ( var_1_8 ))))) )) < (( ((((( 0u )) > (( var_1_5 ))) ? (( 0u )) : (( var_1_5 )))) ))) ? (( (((((( var_1_11 ) - ( var_1_8 ))) < 0 ) ? -((( var_1_11 ) - ( var_1_8 ))) : ((( var_1_11 ) - ( var_1_8 ))))) )) : (( ((((( 0u )) > (( var_1_5 ))) ? (( 0u )) : (( var_1_5 )))) ))))
 );
                  var_1_26 = (
  var_1_27
 );
                   if ( (( ((var_1_25) % ( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))) >= ( ((var_1_12) * (var_1_10))))) {
                    var_1_35 = (
                     ((((( (((((( var_1_32 ) + ( var_1_33 ))) < 0 ) ? -((( var_1_32 ) + ( var_1_33 ))) : ((( var_1_32 ) + ( var_1_33 ))))) )) > (( var_1_37 ))) ? (( (((((( var_1_32 ) + ( var_1_33 ))) < 0 ) ? -((( var_1_32 ) + ( var_1_33 ))) : ((( var_1_32 ) + ( var_1_33 ))))) )) : (( var_1_37 ))))
  );
 }
                   if ( ((var_1_36) > (var_1_25))) {
                    var_1_40 = (
                     ((((( var_1_27 )) > (( (( var_1_41 ) - ( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) ))) ? (( var_1_27 )) : (( (( var_1_41 ) - ( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42))) )) ))))
  );
 } else {
                    if ( ((-32) < (var_1_12))) {
                     var_1_40 = (
                      ((((( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) )) > (( var_1_42 ))) ? (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))) )) : (( var_1_42 ))))
   );
  }
 }
 signed long int stepLocal_3 = var_1_5;
 signed long int stepLocal_2 = (((((var_1_8)) < (( ((64) - (16))))) ? ((var_1_8)) : (( ((64) - (16))))));
                                if ( ((var_1_7) < (stepLocal_2))) {
                                 if ( ((stepLocal_3) > ( (((((last_1_var_1_12)) > ((-2))) ? ((last_1_var_1_12)) : ((-2))))))) {
                                  var_1_12 = (
                                   ((((( var_1_8 )) > (( var_1_5 ))) ? (( var_1_8 )) : (( var_1_5 ))))
   );
  } else {
                                  var_1_12 = (
    5u
   );
  }
 } else {
                                 var_1_12 = (
   var_1_11
  );
 }
                  if (var_1_21) {
                   if ( (( (((((((((127.5f)) < ((var_1_24))) ? ((127.5f)) : ((var_1_24))))) < 0 ) ? -((((((127.5f)) < ((var_1_24))) ? ((127.5f)) : ((var_1_24))))) : ((((((127.5f)) < ((var_1_24))) ? ((127.5f)) : ((var_1_24)))))))) > (10.5f))) {
                    var_1_22 = (
    var_1_25
   );
  }
 }
                   if ( ((var_1_36) <= ( ((var_1_37) & (var_1_9))))) {
                    if ( (( ((var_1_24) * (var_1_27))) >= (var_1_26))) {
                     if ( (! (var_1_21))) {
                      var_1_38 = (
                       ((
      3151323843u
     ) - (
                        ((
       var_1_34
      ) + (
                         ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))
      ))
     ))
    );
   } else {
                      var_1_38 = (
     var_1_34
    );
   }
  } else {
                     var_1_38 = (
    var_1_39
   );
  }
 }
                                if ( (( ((var_1_12) + (var_1_8))) <= ( (( ((var_1_14) - (25))) - (var_1_5))))) {
                                 if (var_1_6) {
                                  if ( ((var_1_15) && (var_1_16))) {
                                   var_1_13 = (
     var_1_7
    );
   } else {
                                   var_1_13 = (
     var_1_8
    );
   }
  }
 } else {
                                 var_1_13 = (
   var_1_12
  );
 }
                                var_1_18 = (
  var_1_19
 );
                                var_1_20 = (
  var_1_8
 );
                   var_1_45 = (
  var_1_46
 );
                                var_1_21 = (
  var_1_6
 );
                                if ( (( ((var_1_10) != (var_1_11))) && ( (! (var_1_21))))) {
                                 var_1_17 = (
                                  ((((( var_1_1 )) > (( var_1_8 ))) ? (( var_1_1 )) : (( var_1_8 ))))
  );
 }
 signed long int stepLocal_1 = (((((var_1_17)) < ((var_1_13))) ? ((var_1_17)) : ((var_1_13))));
                               if ( ((var_1_17) >= (stepLocal_1))) {
                                if (var_1_6) {
                                 var_1_9 = (
    var_1_5
   );
  }
 }
                   var_1_44 = (
  var_1_34
 );
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_11 >= 2147483647);
 assume_abort_if_not(var_1_11 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 1073741823);
 assume_abort_if_not(var_1_14 <= 2147483647);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 1);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483647);
 assume_abort_if_not(var_1_25 <= 2147483646);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -1);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483647);
 assume_abort_if_not(var_1_36 <= 2147483647);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483647);
 assume_abort_if_not(var_1_37 <= 2147483646);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1073741823);
 var_1_41 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854766000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 if ( (( (( ((last_1_var_1_17) + (last_1_var_1_10))) ^ (last_1_var_1_12))) < ( ((var_1_5) | (-4))))) {
 } else {
 }
 if ( ((var_1_17) >= ( (((((var_1_17)) < ((var_1_13))) ? ((var_1_17)) : ((var_1_13))))))) {
  if (var_1_6) {
  }
 }
 if ( ((var_1_7) < ( (((((var_1_8)) < (( ((64) - (16))))) ? ((var_1_8)) : (( ((64) - (16))))))))) {
  if ( ((var_1_5) > ( (((((last_1_var_1_12)) > ((-2))) ? ((last_1_var_1_12)) : ((-2))))))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_12) + (var_1_8))) <= ( (( ((var_1_14) - (25))) - (var_1_5))))) {
  if (var_1_6) {
   if ( ((var_1_15) && (var_1_16))) {
   } else {
   }
  }
 } else {
 }
 if ( (( ((var_1_10) != (var_1_11))) && ( (! (var_1_21))))) {
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
            last_1_var_1_17
           ) + (
            last_1_var_1_10
           ))
          ) ^ (
           last_1_var_1_12
          ))
         ) < (
                                                              ((
           var_1_5
          ) | (
           -4
          ))
         ))
        ) ? (
                                                        ((
          var_1_1
         ) == (
                                                         ((signed short int) (
                                                          ((
            var_1_7
           ) - (
            var_1_8
           ))
          ))
         ))
        ) : (
                                                        ((
          var_1_1
         ) == (
                                                         ((signed short int) (
                                                          ((
            last_1_var_1_12
           ) + (
            -16
           ))
          ))
         ))
        ))
       ) && (
                                            ((
                                                  ((
          var_1_17
         ) >= (
                                                   ((((( var_1_17 )) < (( var_1_13 ))) ? (( var_1_17 )) : (( var_1_13 ))))
         ))
        ) ? (
                                             ((
          var_1_6
         ) ? (
                                              ((
           var_1_9
          ) == (
                                               ((unsigned long int) (
            var_1_5
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
        var_1_10
       ) == (
                                            ((unsigned long int) (
                                             ((((( (((((( var_1_11 ) - ( var_1_8 ))) < 0 ) ? -((( var_1_11 ) - ( var_1_8 ))) : ((( var_1_11 ) - ( var_1_8 ))))) )) < (( ((((( 0u )) > (( var_1_5 ))) ? (( 0u )) : (( var_1_5 )))) ))) ? (( (((((( var_1_11 ) - ( var_1_8 ))) < 0 ) ? -((( var_1_11 ) - ( var_1_8 ))) : ((( var_1_11 ) - ( var_1_8 ))))) )) : (( ((((( 0u )) > (( var_1_5 ))) ? (( 0u )) : (( var_1_5 )))) ))))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_7
       ) < (
                                                   ((((( var_1_8 )) < (( (( 64 ) - ( 16 )) ))) ? (( var_1_8 )) : (( (( 64 ) - ( 16 )) ))))
       ))
      ) ? (
                                            ((
                                                   ((
         var_1_5
        ) > (
                                                    ((((( last_1_var_1_12 )) > (( -2 ))) ? (( last_1_var_1_12 )) : (( -2 ))))
        ))
       ) ? (
                                             ((
         var_1_12
        ) == (
                                              ((unsigned long int) (
                                               ((((( var_1_8 )) > (( var_1_5 ))) ? (( var_1_8 )) : (( var_1_5 ))))
         ))
        ))
       ) : (
                                             ((
         var_1_12
        ) == (
                                              ((unsigned long int) (
          5u
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_12
       ) == (
                                             ((unsigned long int) (
         var_1_11
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
                                                  ((
        var_1_12
       ) + (
        var_1_8
       ))
      ) <= (
                                                  ((
                                                   ((
         var_1_14
        ) - (
         25
        ))
       ) - (
        var_1_5
       ))
      ))
     ) ? (
                                           ((
       var_1_6
      ) ? (
                                            ((
                                                   ((
         var_1_15
        ) && (
         var_1_16
        ))
       ) ? (
                                             ((
         var_1_13
        ) == (
                                              ((signed long int) (
          var_1_7
         ))
        ))
       ) : (
                                             ((
         var_1_13
        ) == (
                                              ((signed long int) (
          var_1_8
         ))
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                           ((
       var_1_13
      ) == (
                                            ((signed long int) (
        var_1_12
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_10
      ) != (
       var_1_11
      ))
     ) && (
                                                 (! (
       var_1_21
      ))
     ))
    ) ? (
                                          ((
      var_1_17
     ) == (
                                           ((signed short int) (
                                            ((((( var_1_1 )) > (( var_1_8 ))) ? (( var_1_1 )) : (( var_1_8 ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_18
   ) == (
                                         ((unsigned char) (
     var_1_19
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned short int) (
    var_1_8
   ))
  ))
 ))
) && (
                                      ((
  var_1_21
 ) == (
                                       ((unsigned char) (
   var_1_6
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
