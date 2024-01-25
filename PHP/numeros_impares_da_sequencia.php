<?php
    $n = 4;
    $cont = 0;
    $i = 1;

    echo "Números Ímpares: " . PHP_EOL;

    while($cont < $n){
        if($i % 2 != 0){
            echo $i . PHP_EOL;
            $cont++;
        }

        $i++;
    }