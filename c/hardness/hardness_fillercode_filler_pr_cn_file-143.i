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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch143Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 0.02;
unsigned short int var_1_2 = 50;
signed long int var_1_3 = 5;
float var_1_4 = 32.2;
float var_1_5 = 10.25;
float var_1_6 = 49.4;
signed short int var_1_7 = 2;
signed long int var_1_8 = -2;
signed short int var_1_9 = -50;
unsigned char var_1_10 = 4;
unsigned char var_1_11 = 100;
unsigned char var_1_12 = 10;
unsigned char var_1_13 = 64;
signed short int var_1_14 = 100;
signed short int var_1_15 = 23466;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
signed long int var_1_18 = -8;
signed short int var_1_19 = 8;
signed short int var_1_20 = 10000;
signed short int var_1_21 = -10;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
signed long int var_1_24 = 16;
signed long int var_1_25 = 1000000;
unsigned short int var_1_26 = 8;
unsigned char var_1_27 = 0;
signed long int var_1_28 = -128;
unsigned short int var_1_29 = 4;
unsigned short int var_1_30 = 0;
double var_1_31 = 3.5;
double var_1_32 = 5.2;
unsigned short int var_1_33 = 0;
unsigned long int var_1_34 = 16;
unsigned char var_1_35 = 1;
unsigned short int var_1_36 = 1;
signed char var_1_37 = -100;
signed long int var_1_38 = 2;
signed char var_1_39 = 1;
double var_1_40 = 10.8;
double var_1_41 = 7.2;
signed char var_1_42 = 1;
signed short int var_1_43 = -8;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = 25;
 signed long int stepLocal_1 = var_1_8;
                               if ( ((var_1_6) > (var_1_4))) {
                                if ( ((stepLocal_2) <= ( (((((var_1_3)) > ((var_1_2))) ? ((var_1_3)) : ((var_1_2))))))) {
                                 if ( (( (~ ( ((var_1_2) ^ (var_1_3))))) <= (stepLocal_1))) {
                                 var_1_7 = (
     32
    );
   } else {
                                  var_1_7 = (
     var_1_9
    );
   }
  }
 }
                               var_1_10 = (
                                ((((( var_1_11 )) < (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
 );
                               var_1_13 = (
  var_1_12
 );
                                var_1_14 = (
                                 ((
                                  ((
    var_1_15
   ) - (
                                   ((
     4
    ) + (
     var_1_10
    ))
   ))
  ) - (
   var_1_12
  ))
 );
             if ( ((var_1_31) > ( (((((var_1_32)) > (( (((((var_1_40)) > ((var_1_41))) ? ((var_1_40)) : ((var_1_41))))))) ? ((var_1_32)) : (( (((((var_1_40)) > ((var_1_41))) ? ((var_1_40)) : ((var_1_41))))))))))) {
              var_1_39 = (
               (((((( var_1_38 ) - ( var_1_42 ))) < 0 ) ? -((( var_1_38 ) - ( var_1_42 ))) : ((( var_1_38 ) - ( var_1_42 )))))
  );
 }
                                if ( ((var_1_9) <= (-16))) {
                                 var_1_18 = (
                                  (((((( (( var_1_11 ) + ( var_1_10 )) ) + ( var_1_2 ))) < 0 ) ? -((( (( var_1_11 ) + ( var_1_10 )) ) + ( var_1_2 ))) : ((( (( var_1_11 ) + ( var_1_10 )) ) + ( var_1_2 )))))
  );
 }
                                var_1_19 = (
                                 ((
                                  ((
                                   ((
     var_1_20
    ) - (
     var_1_14
    ))
   ) + (
    var_1_12
   ))
  ) - (
   var_1_13
  ))
 );
            if ( ((var_1_26) > (var_1_24))) {
             if (var_1_27) {
              if ( (( ((var_1_29) >= (var_1_30))) || ( ((var_1_28) < (var_1_24))))) {
               var_1_31 = (
                ((
                 ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
     ) - (
                 ((((((((3.25) < 0 ) ? -(3.25) : (3.25)))) < 0 ) ? -(((((3.25) < 0 ) ? -(3.25) : (3.25)))) : (((((3.25) < 0 ) ? -(3.25) : (3.25))))))
     ))
    );
   }
  }
 }
             var_1_43 = (
  var_1_39
 );
                                var_1_21 = (
  var_1_9
 );
            if ( ((var_1_27) && ( ((var_1_24) < ( (((((var_1_25)) > ((var_1_28))) ? ((var_1_25)) : ((var_1_28))))))))) {
             var_1_26 = (
              ((
    var_1_29
   ) + (
               ((
     2
    ) + (
     var_1_30
    ))
   ))
  );
 }
                                var_1_22 = (
  var_1_23
 );
 signed long int stepLocal_0 = (((((64)) > ((var_1_18))) ? ((64)) : ((var_1_18))));
                              if ( ((stepLocal_0) <= (var_1_18))) {
                               var_1_1 = (
                                ((
    var_1_4
   ) - (
                                 ((
     var_1_5
    ) + (
     var_1_6
    ))
   ))
  );
 } else {
                               if ( ((var_1_5) == (var_1_6))) {
                                var_1_1 = (
                                 ((
     var_1_6
    ) + (
     var_1_5
    ))
   );
  } else {
                                var_1_1 = (
    var_1_4
   );
  }
 }
           var_1_24 = (
            ((
   200
  ) - (
   var_1_25
  ))
 );
             if ( (( ((var_1_31) <= ( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))) || (var_1_27))) {
              var_1_33 = (
   var_1_29
  );
 }
             if ( ((var_1_27) || ( (! (var_1_35))))) {
              if ( ((var_1_33) > (var_1_25))) {
               if ( ((var_1_32) <= (var_1_31))) {
                var_1_34 = (
     var_1_25
    );
   }
  }
 }
             if ( ((var_1_24) < (1000000000))) {
              if ( (( ((-50) / (var_1_37))) > ( ((var_1_30) >> (var_1_38))))) {
               var_1_36 = (
                ((
     var_1_38
    ) + (
     var_1_29
    ))
   );
  }
 }
 unsigned short int stepLocal_3 = var_1_2;
                                if ( ((stepLocal_3) > (var_1_21))) {
                                 var_1_16 = (
                                  ((
                                   ((
     var_1_8
    ) > (
     var_1_7
    ))
   ) && (
    var_1_17
   ))
  );
 } else {
                                 var_1_16 = (
                                  ((
                                   ((
     var_1_4
    ) < (
                                    ((((( var_1_6 )) < (( var_1_5 ))) ? (( var_1_6 )) : (( var_1_5 ))))
    ))
   ) && (
    var_1_17
   ))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -32767);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 16382);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 0);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 8191);
 assume_abort_if_not(var_1_20 <= 16383);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 2147483646);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 16383);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -128);
 assume_abort_if_not(var_1_37 <= 127);
 assume_abort_if_not(var_1_37 != 0);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= 1);
 assume_abort_if_not(var_1_38 <= 15);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (((((64)) > ((var_1_18))) ? ((64)) : ((var_1_18))))) <= (var_1_18))) {
 } else {
  if ( ((var_1_5) == (var_1_6))) {
  } else {
  }
 }
 if ( ((var_1_6) > (var_1_4))) {
  if ( ((25) <= ( (((((var_1_3)) > ((var_1_2))) ? ((var_1_3)) : ((var_1_2))))))) {
   if ( (( (~ ( ((var_1_2) ^ (var_1_3))))) <= (var_1_8))) {
   } else {
   }
  }
 }
 if ( ((var_1_2) > (var_1_21))) {
 } else {
 }
 if ( ((var_1_9) <= (-16))) {
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
                                                   ((((( 64 )) > (( var_1_18 ))) ? (( 64 )) : (( var_1_18 ))))
          ) <= (
           var_1_18
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((float) (
                                                ((
             var_1_4
            ) - (
                                                 ((
              var_1_5
             ) + (
              var_1_6
             ))
            ))
           ))
          ))
         ) : (
                                              ((
                                                    ((
            var_1_5
           ) == (
            var_1_6
           ))
          ) ? (
                                               ((
            var_1_1
           ) == (
                                                ((float) (
                                                 ((
              var_1_6
             ) + (
              var_1_5
             ))
            ))
           ))
          ) : (
                                               ((
            var_1_1
           ) == (
                                                ((float) (
             var_1_4
            ))
           ))
          ))
         ))
        ) && (
                                              ((
                                                   ((
           var_1_6
          ) > (
           var_1_4
          ))
         ) ? (
                                               ((
                                                    ((
            25
           ) <= (
                                                     ((((( var_1_3 )) > (( var_1_2 ))) ? (( var_1_3 )) : (( var_1_2 ))))
           ))
          ) ? (
                                                ((
                                                     ((
                                                      (~ (
                                                       ((
               var_1_2
              ) ^ (
               var_1_3
              ))
             ))
            ) <= (
             var_1_8
            ))
           ) ? (
                                                ((
             var_1_7
            ) == (
                                                 ((signed short int) (
              32
             ))
            ))
           ) : (
                                                 ((
             var_1_7
            ) == (
                                                  ((signed short int) (
              var_1_9
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
         var_1_10
        ) == (
                                              ((unsigned char) (
                                               ((((( var_1_11 )) < (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
         ))
        ))
       ))
      ) && (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         var_1_12
        ))
       ))
      ))
     ) && (
                                           ((
       var_1_14
      ) == (
                                            ((signed short int) (
                                             ((
                                              ((
          var_1_15
         ) - (
                                               ((
           4
          ) + (
           var_1_10
          ))
         ))
        ) - (
         var_1_12
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_2
      ) > (
       var_1_21
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned char) (
                                             ((
                                              ((
          var_1_8
         ) > (
          var_1_7
         ))
        ) && (
         var_1_17
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned char) (
                                             ((
                                              ((
          var_1_4
         ) < (
                                               ((((( var_1_6 )) < (( var_1_5 ))) ? (( var_1_6 )) : (( var_1_5 ))))
         ))
        ) && (
         var_1_17
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_9
     ) <= (
      -16
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((signed long int) (
                                            (((((( (( var_1_11 ) + ( var_1_10 )) ) + ( var_1_2 ))) < 0 ) ? -((( (( var_1_11 ) + ( var_1_10 )) ) + ( var_1_2 ))) : ((( (( var_1_11 ) + ( var_1_10 )) ) + ( var_1_2 )))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_19
   ) == (
                                         ((signed short int) (
                                          ((
                                           ((
                                            ((
        var_1_20
       ) - (
        var_1_14
       ))
      ) + (
       var_1_12
      ))
     ) - (
      var_1_13
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_21
  ) == (
                                        ((signed short int) (
    var_1_9
   ))
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((unsigned char) (
   var_1_23
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
