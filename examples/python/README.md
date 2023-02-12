# Rerun Examples
The simplest example is [`minimal`](minimal/main.py). You may want to start there!

## Setup
First install the Rerun Python SDK with `pip install rerun-sdk` (coming soon!)

<!-- TODO(emilk): remove the coming soon -->

## Dependencies
Each example comes with its own set of dependencies listed in a `requirements.txt` file. For example, to install dependencies and run the toy `car` example (which doesn't need to download any data) run:

```sh
pip install -r examples/python/car/requirements.txt
examples/python/car/main.py
```

You can also install all dependencies needed to run all examples with:

```sh
pip install -r examples/python/requirements.txt
```

## Running the examples
By default, the examples spawn a Rerun Viewer and stream log data to it.

You can instead save the log data to an `.rrd` file using `examples/python/car/main.py --save data.rrd`. You can then open that `.rrd` file with `rerun data.rrd`.

(`rerun` is an alias for `python -m rerun`).

NOTE: `.rrd` files do not yet guarantee any backwards or forwards compatibility. One version of Rerun will likely not be able to open an `.rrd` file generated by another Rerun version.

## Datasets
Some examples will download a small datasets before they run. They will do so the first time you run the example. The datasets will be added to a subdir called `dataset`, which is in the repo-wide `.gitignore`.

## Contributions welcome
Feel free to open a PR to add a new example!

See [`CONTRIBUTING.md`](../CONTRIBUTING.md) for details on how to contribute.