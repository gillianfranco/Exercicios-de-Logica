<?php
    $n = 10;
    $soma = 1;

    if($n == 1){
        echo "O resultado é $soma";
    }else{
        for($i = 2; $i <= $n; $i++){
            $soma += $i;
        }
    }

    echo "A soma dos primeiros $n números é $soma";