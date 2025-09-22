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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 16;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 10;
signed long int var_1_6 = 2;
signed char var_1_7 = 10;
signed long int var_1_8 = -25;
signed char var_1_9 = -16;
signed char var_1_10 = -2;
signed char var_1_11 = 2;
signed char var_1_12 = 10;
signed char var_1_13 = 4;
signed char var_1_14 = -10;
double var_1_15 = 32.25;
double var_1_16 = 64.7;
double var_1_17 = 9.42;
double var_1_18 = 0.0;
unsigned short int var_1_19 = 8;
signed long int var_1_20 = 256;
unsigned short int var_1_21 = 8;
unsigned short int var_1_22 = 27400;
double var_1_23 = 499.5;
double var_1_24 = 50.5;
unsigned char var_1_25 = 8;
unsigned long int var_1_26 = 32;
unsigned long int var_1_27 = 10;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 16;
unsigned char var_1_33 = 128;
signed long int var_1_34 = 5;
signed long int var_1_35 = 128;
unsigned char var_1_36 = 128;
unsigned char var_1_37 = 1;
unsigned char var_1_38 = 2;
double var_1_39 = 32.5;
double var_1_40 = 32.2;
double var_1_41 = 128.5;
double var_1_42 = 24.5;
double var_1_43 = 15.8;
unsigned char var_1_44 = 32;
unsigned long int var_1_45 = 256;
unsigned long int var_1_46 = 1000;
signed long int last_1_var_1_20 = 256;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = var_1_3;
                              if ( ((var_1_2) && (stepLocal_0))) {
                               var_1_1 = (
                                ((
    var_1_4
   ) - (
    var_1_5
   ))
  );
 } else {
                               var_1_1 = (
   var_1_4
  );
 }
             var_1_45 = (
  var_1_46
 );
                              var_1_6 = (
                               ((
   var_1_5
  ) + (
   var_1_4
  ))
 );
 signed long int stepLocal_1 = ((var_1_4) / (var_1_8));
                              if ( ((stepLocal_1) != (var_1_1))) {
                               var_1_7 = (
                                ((((( (( ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) ) + ( var_1_10 )) )) < (( var_1_11 ))) ? (( (( ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) ) + ( var_1_10 )) )) : (( var_1_11 ))))
  );
 } else {
                               var_1_7 = (
                                ((
    var_1_12
   ) - (
    var_1_13
   ))
  );
 }
            if ( ((var_1_27) != ( ((var_1_32) + (var_1_26))))) {
             var_1_34 = (
              ((((( var_1_33 )) > (( ((((( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) < (( var_1_35 ))) ? (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) : (( var_1_35 )))) ))) ? (( var_1_33 )) : (( ((((( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) < (( var_1_35 ))) ? (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) : (( var_1_35 )))) ))))
  );
 } else {
             var_1_34 = (
   var_1_32
  );
 }
             if ( ((-5) > ( (~ (var_1_36))))) {
              var_1_41 = (
   var_1_40
  );
 } else {
              if ( (! ( ((var_1_39) <= (var_1_40))))) {
               var_1_41 = (
    var_1_40
   );
  } else {
               var_1_41 = (
                ((((( (( var_1_40 ) + ( var_1_42 )) )) < (( var_1_43 ))) ? (( (( var_1_40 ) + ( var_1_42 )) )) : (( var_1_43 ))))
   );
  }
 }
 signed long int stepLocal_2 = var_1_8;
                               if ( (( ((var_1_15) * ( (((((var_1_16)) > ((var_1_17))) ? ((var_1_16)) : ((var_1_17))))))) >= (var_1_18))) {
                                if ( ((stepLocal_2) < ( (( ((var_1_5) << (var_1_11))) + ( ((var_1_4) + (var_1_6))))))) {
                                 var_1_14 = (
    var_1_12
   );
  } else {
                                 var_1_14 = (
                                  ((
     var_1_9
    ) + (
     var_1_10
    ))
   );
  }
 }
             if ( (( ((((( (- (128)))) < (( ((128) ^ (var_1_38))))) ? (( (- (128)))) : (( ((128) ^ (var_1_38))))))) >= (var_1_34))) {
              var_1_39 = (
               ((
    var_1_40
   ) + (
    5.75
   ))
  );
 }
                                if ( (( ((last_1_var_1_20) ^ (var_1_6))) >= (var_1_13))) {
                                 var_1_20 = (
                                  ((((( -5 )) > (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))) ? (( -5 )) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))))
  );
 }
                                if ( ((var_1_12) == (var_1_6))) {
                                 var_1_21 = (
                                  ((
                                   ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
   ) + (
                                   ((
     var_1_22
    ) - (
     var_1_13
    ))
   ))
  );
 } else {
                                 var_1_21 = (
   var_1_6
  );
 }
           var_1_26 = (
            ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
 );
            if ( ((var_1_27) > (var_1_26))) {
             if ( ((var_1_26) < (var_1_27))) {
              var_1_28 = (
               ((
     var_1_29
    ) && (
     var_1_30
    ))
   );
  }
 } else {
             var_1_28 = (
              (! (
    var_1_31
   ))
  );
 }
                                var_1_23 = (
  var_1_24
 );
             if ( (( ((var_1_26) ^ (var_1_32))) <= ( ((16u) & (var_1_33))))) {
              var_1_36 = (
               ((((( ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) )) < (( ((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) < 0 ) ? -(((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) ))) ? (( ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))) )) : (( ((((((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) < 0 ) ? -(((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))) : (((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) ))))
  );
 }
                                var_1_25 = (
  64
 );
             if (var_1_37) {
              var_1_44 = (
               ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))
  );
 }
 signed long int stepLocal_3 = ((var_1_12) % ( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))));
                                if ( ((stepLocal_3) != (-10))) {
                                var_1_19 = (
                                 ((((( 4 )) < (( var_1_21 ))) ? (( 4 )) : (( var_1_21 ))))
  );
 } else {
                                 var_1_19 = (
   var_1_13
  );
 }
            var_1_32 = (
  var_1_33
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 127);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -63);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -1);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 16383);
 assume_abort_if_not(var_1_22 <= 32767);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854766000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854766000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483647);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -461168.6018427383000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 4611686.018427383000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -461168.6018427383000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( ((var_1_2) && (var_1_3))) {
 } else {
 }
 if ( (( ((var_1_4) / (var_1_8))) != (var_1_1))) {
 } else {
 }
 if ( (( ((var_1_15) * ( (((((var_1_16)) > ((var_1_17))) ? ((var_1_16)) : ((var_1_17))))))) >= (var_1_18))) {
  if ( ((var_1_8) < ( (( ((var_1_5) << (var_1_11))) + ( ((var_1_4) + (var_1_6))))))) {
  } else {
  }
 }
 if ( (( ((var_1_12) % ( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) != (-10))) {
 } else {
 }
 if ( (( ((last_1_var_1_20) ^ (var_1_6))) >= (var_1_13))) {
 }
 if ( ((var_1_12) == (var_1_6))) {
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
         ) && (
          var_1_3
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned char) (
                                               ((
            var_1_4
           ) - (
            var_1_5
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned char) (
           var_1_4
          ))
         ))
        ))
       ) && (
                                            ((
         var_1_6
        ) == (
                                             ((signed long int) (
                                              ((
           var_1_5
          ) + (
           var_1_4
          ))
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
                                                  ((
          var_1_4
         ) / (
          var_1_8
         ))
        ) != (
         var_1_1
        ))
       ) ? (
                                            ((
         var_1_7
        ) == (
                                             ((signed char) (
                                              ((((( (( ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) ) + ( var_1_10 )) )) < (( var_1_11 ))) ? (( (( ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9))) ) + ( var_1_10 )) )) : (( var_1_11 ))))
         ))
        ))
       ) : (
                                            ((
         var_1_7
        ) == (
                                             ((signed char) (
                                              ((
           var_1_12
          ) - (
           var_1_13
          ))
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                ((
                                                 ((
         var_1_15
        ) * (
                                                  ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 ))))
        ))
       ) >= (
        var_1_18
       ))
      ) ? (
                                            ((
                                                   ((
         var_1_8
        ) < (
                                                    ((
                                                     ((
           var_1_5
          ) << (
           var_1_11
          ))
         ) + (
                                                     ((
           var_1_4
          ) + (
           var_1_6
          ))
         ))
        ))
       ) ? (
                                             ((
         var_1_14
        ) == (
                                              ((signed char) (
          var_1_12
         ))
        ))
       ) : (
                                             ((
         var_1_14
        ) == (
                                              ((signed char) (
                                               ((
           var_1_9
          ) + (
           var_1_10
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
                                                  ((
        var_1_12
       ) % (
                                                   ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
       ))
      ) != (
       -10
      ))
     ) ? (
                                           ((
       var_1_19
      ) == (
                                            ((unsigned short int) (
                                             ((((( 4 )) < (( var_1_21 ))) ? (( 4 )) : (( var_1_21 ))))
       ))
      ))
     ) : (
                                           ((
       var_1_19
      ) == (
                                            ((unsigned short int) (
        var_1_13
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       last_1_var_1_20
      ) ^ (
       var_1_6
      ))
     ) >= (
      var_1_13
     ))
    ) ? (
                                          ((
      var_1_20
     ) == (
                                           ((signed long int) (
                                            ((((( -5 )) > (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))) ? (( -5 )) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_12
    ) == (
     var_1_6
    ))
   ) ? (
                                         ((
     var_1_21
    ) == (
                                          ((unsigned short int) (
                                           ((
                                            ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
      ) + (
                                            ((
        var_1_22
       ) - (
        var_1_13
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_21
    ) == (
                                          ((unsigned short int) (
      var_1_6
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_23
  ) == (
                                        ((double) (
    var_1_24
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((unsigned char) (
   64
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
