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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch32Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 2;
unsigned char var_1_2 = 0;
unsigned char var_1_4 = 100;
unsigned char var_1_5 = 2;
unsigned char var_1_6 = 64;
unsigned char var_1_7 = 32;
unsigned char var_1_8 = 32;
float var_1_9 = 100.5;
float var_1_11 = 0.8;
float var_1_12 = 2.5;
signed short int var_1_13 = -32;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
float var_1_18 = 0.25;
float var_1_19 = 100000000.25;
signed char var_1_20 = 0;
signed char var_1_21 = 10;
double var_1_22 = 1000000.5;
unsigned long int var_1_23 = 256;
unsigned long int var_1_24 = 50;
signed long int var_1_25 = 64;
signed long int var_1_28 = 8;
unsigned long int var_1_29 = 4;
signed long int var_1_30 = -32;
unsigned long int var_1_31 = 10;
signed long int var_1_32 = 0;
unsigned long int var_1_33 = 2219578776;
unsigned char var_1_34 = 0;
unsigned char var_1_36 = 5;
float var_1_37 = 256.125;
float var_1_38 = 127.25;
unsigned char var_1_41 = 32;
double var_1_42 = 16.125;
double var_1_43 = 256.5;
signed short int var_1_45 = -10;
unsigned char last_1_var_1_15 = 1;
void initially(void) {
}
void step(void) {
                                var_1_22 = (
  var_1_12
 );
                                var_1_23 = (
  var_1_8
 );
                   if ( ((var_1_23) < ( (((((var_1_24)) < (( ((var_1_28) >> (var_1_29))))) ? ((var_1_24)) : (( ((var_1_28) >> (var_1_29))))))))) {
                   if ( ((var_1_23) > (var_1_24))) {
                    var_1_25 = (
    var_1_30
   );
  } else {
                    if ( (( (( (((((var_1_28)) > ((var_1_29))) ? ((var_1_28)) : ((var_1_29))))) >> (var_1_31))) > ( ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))) {
                     var_1_25 = (
                      ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))
    );
   }
  }
 } else {
                    if ( (( ((var_1_29) - (var_1_32))) <= ( (~ ( ((var_1_33) - (var_1_28))))))) {
                     var_1_25 = (
                      ((((( var_1_32 )) > (( var_1_31 ))) ? (( var_1_32 )) : (( var_1_31 ))))
   );
  } else {
                     var_1_25 = (
    -32
   );
  }
 }
                                var_1_24 = (
  var_1_6
 );
                   if ( (( ((var_1_12) / ( (((((var_1_42)) > ((256.5))) ? ((var_1_42)) : ((256.5))))))) < (var_1_12))) {
                    var_1_41 = (
   var_1_31
  );
 }
                              if ( ((-32) < (var_1_23))) {
                               var_1_1 = (
                                ((
                                 ((
                                  ((
      var_1_4
     ) - (
      var_1_5
     ))
    ) + (
     var_1_6
    ))
   ) - (
                                 ((
     var_1_7
    ) + (
                                  ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))
    ))
   ))
  );
 }
                   if ( ((var_1_23) >= (-25))) {
                    var_1_34 = (
   var_1_16
  );
 }
                   if ( (( ((var_1_37) - (var_1_38))) >= ( ((var_1_19) * (var_1_9))))) {
                    var_1_36 = (
   5
  );
 }
                   if ( (( (( (((((var_1_12)) < ((var_1_11))) ? ((var_1_12)) : ((var_1_11))))) >= ( ((var_1_11) / (var_1_42))))) || (var_1_16))) {
                    if ( ((var_1_16) || (var_1_2))) {
                     var_1_43 = (
                      ((((99.65) < 0 ) ? -(99.65) : (99.65)))
   );
  }
 }
                   if ( ((var_1_29) <= ( ((var_1_23) ^ ( ((var_1_6) & (var_1_28))))))) {
                    if (var_1_16) {
                     if (var_1_17) {
                      var_1_45 = (
     var_1_29
    );
   } else {
                      var_1_45 = (
     var_1_8
    );
   }
  }
 }
                              if ( (( ((var_1_24) + ( (((((var_1_24)) > ((var_1_6))) ? ((var_1_24)) : ((var_1_6))))))) == (var_1_5))) {
                               var_1_9 = (
                                ((
                                 ((
     4.5f
    ) + (
     var_1_11
    ))
   ) - (
    var_1_12
   ))
  );
 } else {
                               var_1_9 = (
   var_1_12
  );
 }
                               if ( ((var_1_5) >= (var_1_6))) {
                                if ( ((var_1_23) <= (var_1_1))) {
                                 var_1_15 = (
    var_1_16
   );
  } else {
                                 if ( ((last_1_var_1_15) || (var_1_16))) {
                                  var_1_15 = (
     var_1_17
    );
   }
  }
 } else {
                                var_1_15 = (
   var_1_17
  );
 }
 unsigned char stepLocal_1 = var_1_15;
 unsigned char stepLocal_0 = var_1_2;
                               if ( ((var_1_17) || (stepLocal_1))) {
                                if ( ((var_1_15) && (stepLocal_0))) {
                                 var_1_18 = (
                                  ((
     var_1_11
    ) + (
     var_1_19
    ))
   );
  } else {
                                 var_1_18 = (
    var_1_19
   );
  }
 }
                                if ( ((var_1_11) == (var_1_9))) {
                                 var_1_20 = (
                                  ((
                                   ((
     var_1_5
    ) + (
     var_1_21
    ))
   ) + (
    var_1_8
   ))
  );
 }
                               if ( (( ((var_1_12) * ( (((((var_1_18)) < ((var_1_11))) ? ((var_1_18)) : ((var_1_11))))))) > ( (- (var_1_18))))) {
                                if ( ((var_1_6) <= (var_1_8))) {
                                 if (var_1_15) {
                                  var_1_13 = (
     var_1_8
    );
   } else {
                                  var_1_13 = (
     var_1_5
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 95);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 32);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 64);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 64);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 63);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -31);
 assume_abort_if_not(var_1_21 <= 31);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 30);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -1073741823);
 assume_abort_if_not(var_1_30 <= 1073741823);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 31);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 2147483646);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -922337.2036854776000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 assume_abort_if_not(var_1_42 != 0.0F);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 if ( ((-32) < (var_1_23))) {
 }
 if ( (( ((var_1_24) + ( (((((var_1_24)) > ((var_1_6))) ? ((var_1_24)) : ((var_1_6))))))) == (var_1_5))) {
 } else {
 }
 if ( (( ((var_1_12) * ( (((((var_1_18)) < ((var_1_11))) ? ((var_1_18)) : ((var_1_11))))))) > ( (- (var_1_18))))) {
  if ( ((var_1_6) <= (var_1_8))) {
   if (var_1_15) {
   } else {
   }
  }
 }
 if ( ((var_1_5) >= (var_1_6))) {
  if ( ((var_1_23) <= (var_1_1))) {
  } else {
   if ( ((last_1_var_1_15) || (var_1_16))) {
   }
  }
 } else {
 }
 if ( ((var_1_17) || (var_1_15))) {
  if ( ((var_1_15) && (var_1_2))) {
  } else {
  }
 }
 if ( ((var_1_11) == (var_1_9))) {
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
          -32
         ) < (
          var_1_23
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned char) (
                                               ((
                                                ((
                                                 ((
              var_1_4
             ) - (
              var_1_5
             ))
            ) + (
             var_1_6
            ))
           ) - (
                                                ((
             var_1_7
            ) + (
                                                 ((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))
            ))
           ))
          ))
         ))
        ) : (
         1
        ))
       ) && (
                                            ((
                                                  ((
                                                   ((
           var_1_24
          ) + (
                                                    ((((( var_1_24 )) > (( var_1_6 ))) ? (( var_1_24 )) : (( var_1_6 ))))
          ))
         ) == (
          var_1_5
         ))
        ) ? (
                                             ((
          var_1_9
         ) == (
                                              ((float) (
                                               ((
                                                ((
             4.5f
            ) + (
             var_1_11
            ))
           ) - (
            var_1_12
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_9
         ) == (
                                              ((float) (
           var_1_12
          ))
         ))
        ))
       ))
      ) && (
                                            ((
                                                 ((
                                                  ((
          var_1_12
         ) * (
                                                   ((((( var_1_18 )) < (( var_1_11 ))) ? (( var_1_18 )) : (( var_1_11 ))))
         ))
        ) > (
                                                  (- (
          var_1_18
         ))
        ))
       ) ? (
                                             ((
                                                    ((
          var_1_6
         ) <= (
          var_1_8
         ))
        ) ? (
                                              ((
          var_1_15
         ) ? (
                                               ((
           var_1_13
          ) == (
                                                ((signed short int) (
            var_1_8
           ))
          ))
         ) : (
                                               ((
           var_1_13
          ) == (
                                                ((signed short int) (
            var_1_5
           ))
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
        var_1_5
       ) >= (
        var_1_6
       ))
      ) ? (
                                            ((
                                                   ((
         var_1_23
        ) <= (
         var_1_1
        ))
       ) ? (
                                             ((
         var_1_15
        ) == (
                                              ((unsigned char) (
          var_1_16
         ))
        ))
       ) : (
                                             ((
                                                    ((
          last_1_var_1_15
         ) || (
          var_1_16
         ))
        ) ? (
                                              ((
          var_1_15
         ) == (
                                               ((unsigned char) (
           var_1_17
          ))
         ))
        ) : (
         1
        ))
       ))
      ) : (
                                            ((
        var_1_15
       ) == (
                                             ((unsigned char) (
         var_1_17
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_17
      ) || (
       var_1_15
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_15
       ) && (
        var_1_2
       ))
      ) ? (
                                            ((
        var_1_18
       ) == (
                                             ((float) (
                                              ((
          var_1_11
         ) + (
          var_1_19
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_18
       ) == (
                                             ((float) (
         var_1_19
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
      var_1_11
     ) == (
      var_1_9
     ))
    ) ? (
                                          ((
      var_1_20
     ) == (
                                           ((signed char) (
                                            ((
                                             ((
         var_1_5
        ) + (
         var_1_21
        ))
       ) + (
        var_1_8
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
                                         ((double) (
     var_1_12
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned long int) (
    var_1_8
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((unsigned long int) (
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
