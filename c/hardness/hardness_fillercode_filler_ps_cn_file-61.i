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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 8.5;
unsigned long int var_1_2 = 100;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
signed long int var_1_10 = 10;
signed long int var_1_11 = -5;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -4;
unsigned short int var_1_27 = 100;
unsigned long int var_1_28 = 2;
unsigned long int var_1_29 = 2;
unsigned long int var_1_30 = 1;
signed long int var_1_31 = 25;
unsigned short int var_1_32 = 100;
signed long int var_1_33 = -100000;
double var_1_34 = 1.5;
unsigned char var_1_35 = 1;
double var_1_36 = 50.5;
double var_1_37 = 1.9;
unsigned long int var_1_38 = 10000;
unsigned char var_1_39 = 1;
signed long int var_1_40 = -25;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 1;
signed short int var_1_45 = -32;
signed short int var_1_46 = 128;
signed short int var_1_47 = 1;
void initially(void) {
}
void step(void) {
           var_1_28 = (
  var_1_29
 );
            if ( ((var_1_29) != (var_1_28))) {
             if ( (( (~ (var_1_28))) != ( (((((((((var_1_31)) < ((var_1_29))) ? ((var_1_31)) : ((var_1_29))))) < 0 ) ? -((((((var_1_31)) < ((var_1_29))) ? ((var_1_31)) : ((var_1_29))))) : ((((((var_1_31)) < ((var_1_29))) ? ((var_1_31)) : ((var_1_29)))))))))) {
              if ( ((var_1_29) < (5u))) {
               if ( (( (((((32)) < (( ((50983) - (var_1_32))))) ? ((32)) : (( ((50983) - (var_1_32))))))) >= ( ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) {
                var_1_30 = (
      var_1_32
     );
    }
   }
  } else {
              var_1_30 = (
    var_1_32
   );
  }
 } else {
             var_1_30 = (
   16u
  );
 }
             if (var_1_35) {
              var_1_34 = (
               ((
    var_1_36
   ) - (
    var_1_37
   ))
  );
 }
             if ( ((var_1_28) >= (var_1_31))) {
              if ( ((var_1_30) > (var_1_31))) {
               var_1_38 = (
    var_1_32
   );
  }
 }
             if ( ((var_1_31) < ( (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) & ( ((var_1_33) % (var_1_40))))))) {
              if ( ((var_1_36) < (var_1_37))) {
               var_1_39 = (
                (! (
     var_1_41
    ))
   );
  } else {
               if (var_1_35) {
                var_1_39 = (
                 ((
      var_1_41
     ) && (
      var_1_42
     ))
    );
   } else {
                if ( ((var_1_40) <= (var_1_28))) {
                 var_1_39 = (
      var_1_42
     );
    } else {
                 var_1_39 = (
                  ((
                   ((
        var_1_42
       ) || (
        var_1_41
       ))
      ) && (
       var_1_43
      ))
     );
    }
   }
  }
 }
             if ( ((var_1_40) > (var_1_32))) {
              var_1_44 = (
               (! (
    var_1_42
   ))
  );
 }
             var_1_45 = (
  var_1_46
 );
             var_1_47 = (
  var_1_46
 );
 unsigned long int stepLocal_0 = var_1_3;
                              if ( ((stepLocal_0) < (var_1_2))) {
                               var_1_4 = (
                                ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
  );
 }
 unsigned long int stepLocal_3 = var_1_4;
 unsigned long int stepLocal_2 = (((((var_1_4)) > ((var_1_5))) ? ((var_1_4)) : ((var_1_5))));
 unsigned long int stepLocal_1 = var_1_4;
                               if ( ((var_1_4) <= (stepLocal_2))) {
                                if ( ((stepLocal_3) < (var_1_5))) {
                                 if ( ((stepLocal_1) >= ( ((var_1_4) ^ (4u))))) {
                                  var_1_7 = (
     var_1_8
    );
   }
  } else {
                                 var_1_7 = (
    var_1_8
   );
  }
 } else {
                                var_1_7 = (
   var_1_8
  );
 }
 unsigned long int stepLocal_4 = var_1_4;
                               if ( ((stepLocal_4) >= ( ((4256310412u) - (128u))))) {
                                var_1_9 = (
                                 ((
                                  (((((( var_1_10 ) + ( var_1_11 ))) < 0 ) ? -((( var_1_10 ) + ( var_1_11 ))) : ((( var_1_10 ) + ( var_1_11 )))))
   ) + (
    var_1_12
   ))
  );
 }
                               if ( ((var_1_4) >= ( ((var_1_14) - ( (((((var_1_15)) < ((var_1_16))) ? ((var_1_15)) : ((var_1_16))))))))) {
                                if ( ((var_1_16) < (var_1_9))) {
                                 var_1_13 = (
    var_1_17
   );
  } else {
                                 var_1_13 = (
    var_1_18
   );
  }
 } else {
                                var_1_13 = (
   var_1_18
  );
 }
                               var_1_19 = (
                                ((
   var_1_20
  ) + (
                                 ((
    10
   ) + (
                                  ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
   ))
  ))
 );
                               var_1_26 = (
  var_1_21
 );
                               var_1_27 = (
  var_1_21
 );
                              if ( (( ((var_1_4) / ( ((((64u) < 0 ) ? -(64u) : (64u)))))) == (var_1_4))) {
                               var_1_1 = (
                                ((
    8.8
   ) - (
    255.2
   ))
  );
 }
                               if (var_1_18) {
                                var_1_22 = (
                                 ((
                                  ((
                                   (- (
      var_1_1
     ))
    ) <= (
     var_1_8
    ))
   ) && (
                                  ((
     var_1_23
    ) || (
                                   ((
      var_1_24
     ) || (
      var_1_25
     ))
    ))
   ))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_10 >= -536870911);
 assume_abort_if_not(var_1_10 <= 536870912);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -536870911);
 assume_abort_if_not(var_1_11 <= 536870911);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1073741823);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_14 >= 2147483647);
 assume_abort_if_not(var_1_14 <= 4294967295);
 var_1_15 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_16 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 2147483647);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 assume_abort_if_not(var_1_31 != 0);
 var_1_32 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 32767);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483647);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483648);
 assume_abort_if_not(var_1_40 <= 2147483647);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 1);
 var_1_46 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_46 >= -32767);
 assume_abort_if_not(var_1_46 <= 32766);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( ((var_1_4) / ( ((((64u) < 0 ) ? -(64u) : (64u)))))) == (var_1_4))) {
 }
 if ( ((var_1_3) < (var_1_2))) {
 }
 if ( ((var_1_4) <= ( (((((var_1_4)) > ((var_1_5))) ? ((var_1_4)) : ((var_1_5))))))) {
  if ( ((var_1_4) < (var_1_5))) {
   if ( ((var_1_4) >= ( ((var_1_4) ^ (4u))))) {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_4) >= ( ((4256310412u) - (128u))))) {
 }
 if ( ((var_1_4) >= ( ((var_1_14) - ( (((((var_1_15)) < ((var_1_16))) ? ((var_1_15)) : ((var_1_16))))))))) {
  if ( ((var_1_16) < (var_1_9))) {
  } else {
  }
 } else {
 }
 if (var_1_18) {
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
           var_1_4
          ) / (
                                                  ((((64u) < 0 ) ? -(64u) : (64u)))
          ))
         ) == (
          var_1_4
         ))
        ) ? (
                                            ((
          var_1_1
         ) == (
                                             ((double) (
                                              ((
            8.8
           ) - (
            255.2
           ))
          ))
         ))
        ) : (
         1
        ))
       ) && (
                                           ((
                                                 ((
          var_1_3
         ) < (
          var_1_2
         ))
        ) ? (
                                            ((
          var_1_4
         ) == (
                                             ((unsigned long int) (
                                              ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
          ))
         ))
        ) : (
         1
        ))
       ))
      ) && (
                                            ((
                                                 ((
         var_1_4
        ) <= (
                                                  ((((( var_1_4 )) > (( var_1_5 ))) ? (( var_1_4 )) : (( var_1_5 ))))
        ))
       ) ? (
                                             ((
                                                  ((
          var_1_4
         ) < (
          var_1_5
         ))
        ) ? (
                                              ((
                                                   ((
           var_1_4
          ) >= (
                                                    ((
            var_1_4
           ) ^ (
            4u
           ))
          ))
         ) ? (
                                               ((
           var_1_7
          ) == (
                                                ((float) (
            var_1_8
           ))
          ))
         ) : (
          1
         ))
        ) : (
                                              ((
          var_1_7
         ) == (
                                               ((float) (
           var_1_8
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_7
        ) == (
                                              ((float) (
          var_1_8
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_4
       ) >= (
                                                   ((
         4256310412u
        ) - (
         128u
        ))
       ))
      ) ? (
                                            ((
        var_1_9
       ) == (
                                             ((signed long int) (
                                              ((
                                               (((((( var_1_10 ) + ( var_1_11 ))) < 0 ) ? -((( var_1_10 ) + ( var_1_11 ))) : ((( var_1_10 ) + ( var_1_11 )))))
         ) + (
          var_1_12
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
       var_1_4
      ) >= (
                                                  ((
        var_1_14
       ) - (
                                                   ((((( var_1_15 )) < (( var_1_16 ))) ? (( var_1_15 )) : (( var_1_16 ))))
       ))
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_16
       ) < (
        var_1_9
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         var_1_17
        ))
       ))
      ) : (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         var_1_18
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_13
      ) == (
                                            ((unsigned char) (
        var_1_18
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_19
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_20
      ) + (
                                            ((
        10
       ) + (
                                             ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_18
   ) ? (
                                         ((
     var_1_22
    ) == (
                                          ((unsigned char) (
                                           ((
                                            ((
                                             (- (
         var_1_1
        ))
       ) <= (
        var_1_8
       ))
      ) && (
                                            ((
        var_1_23
       ) || (
                                             ((
         var_1_24
        ) || (
         var_1_25
        ))
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
   var_1_26
  ) == (
                                        ((signed char) (
    var_1_21
   ))
  ))
 ))
) && (
                                      ((
  var_1_27
 ) == (
                                       ((unsigned short int) (
   var_1_21
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
