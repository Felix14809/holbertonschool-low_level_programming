1.Measurement Methodology

First setting a baseline by meausuring the time a baseline loop to run through 100 million iterations

Second we compile a program that iterates through data with an array size of 5000 two ways. 
One naive iteration that rechecks all the previous data when moving to the next array.
And one single pass through the array.

Third measurement is a program that builds, processes and hashes a dataset of size 50 000

2.Observed Performance Differences

In the baseline we observe .67 ns per iteration compared to 1.45 ns and 1.12n ns for the naive and single pass loops
This difference is likely due to the baseline program not working through arrays and as such not having to access memory.
We observe a large difference in total time spent for the naive and single pass loop. This is due to the nested loop in the naive algorithm
which results in it doing 25 000x more iterations than the single pass, making up the majority of the 31 000x difference. 
The remaining 29% extra time spent is due to running more processes and accessing the memory more often, such as entering and reseting the inner loop 25 000 times. The extra iterations also leaves room for more errors to happen. 

The third program observes a significant difference between steps.
Although we expect processing to take up more performance due to the expensive calculations, multiplication, division and modulo, it takes up slightly less time than building the dataset, 40% vs 47%. This is due to the build stage having to initialize and load the dataset into memory first, so when it is time to process it can directly access the dataset from the previously initialized memory. The same applies to the REDUCE step which is simple sequential multiplication into an unsinged long.

3.Relation Between Runtime and Energy Consumption

Longer runtime mean that the CPU is active for longer and as such uses more energy.
So if a program can be sped up but and still get the same result that results in a raw net reduction of energy consumption.

4.Limitations of the Experiment

This experiment is limited by its small datasets, sample size and the lack of variety of hardware and operating environments used to run the programs.

5.Practical Engineering Takeaway

Writing more efficient code, eliminating unecessary processes such as additional loops and dead characters directly affects how much time and energy is consumed when running the final program.

Sources: Baseline_loop-metrics.md, comparison_algorithm-metrics.md, instrumentation_lab-metrics.md
