# Computer-to-GPU Cluster for Gaussian Model Data
This project aims to create a effcient way to stream and receive data to a GPU Cluster at my university to significantly speed up the calculation of gaussian calculations for large data sets.

## Work In Progress Notes:
```
1. Setup and Understanding of Computer and Cluster
* Hardware specifications (number of nodes, GPUs per node, CPU, memory).
* Software stack (operating system, cluster management tool).
* Network configuration (topology, bandwidth).
* Calculate theoretical optimization limit.

2. Data Aggregation and Cleaning
* Format (CSV, Parquet, etc.) and schema.
* Preprocessing steps (cleaning, normalization, feature engineering).
* Location (local storage, distributed file system).

3. Data Transfer
* Method for transferring data to the cluster (SSH, NFS, HDFS).
* Partitioning and distribution strategy.

4. GPU Utilization (Local and Cluster)
* How GPUs are used (training, inference).
* Code structure for GPU computations.
* Threading to improve efficiency.
* Deep learning framework possiblities and limitations?

5. Code Structure
* Create a OOP of code organization.
* Add documentation for key modules and functions.
```

## Additional Notes
Here is a visualization of the problems I am trying to solve in this project.

![Flowchart of Project](smaAppFlowchart.jpg)

The question marks represent the connections needed to send and receive data for this application. 
